from PyPDF2 import PdfFileReader, PdfFileWriter

# file_name是读取的pdf名
file_name="hello.pdf"
out_name="out.pdf"

pdf = PdfFileReader(open(file_name, 'rb'))
# pdf_write = PdfFileWriter(open(out_name,'wb'))
pdf_write = PdfFileWriter()
# 获取pdf的页数
page_counts = pdf.getNumPages()
# 获取pdf第i-1页
for i in range(page_counts-5):
    pdf_page = pdf.getPage(i)

    # 写入到pdf中,pdf_page是pdf的某一页
    # pdf._write.addPage(pdf_page)
    pdf_write.addPage(pdf_page)
pdf_write.write(open(out_name,"wb"))