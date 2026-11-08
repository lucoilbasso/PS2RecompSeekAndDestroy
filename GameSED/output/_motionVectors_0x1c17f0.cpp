#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _motionVectors
// Address: 0x1c17f0 - 0x1c198c
void _motionVectors_0x1c17f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_motionVectors_0x1c17f0");
#endif

    switch (ctx->pc) {
        case 0x1c1860u: goto label_1c1860;
        case 0x1c1884u: goto label_1c1884;
        case 0x1c18bcu: goto label_1c18bc;
        case 0x1c18c8u: goto label_1c18c8;
        case 0x1c194cu: goto label_1c194c;
        default: break;
    }

    ctx->pc = 0x1c17f0u;

    // 0x1c17f0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1c17f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1c17f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c17f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c17f8: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x1c17f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x1c17fc: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x1c17fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x1c1800: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1c1800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x1c1804: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x1c1804u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1808: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1c1808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x1c180c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1c180cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1c1810: 0x160a82d  daddu       $s5, $t3, $zero
    ctx->pc = 0x1c1810u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1814: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1c1814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1c1818: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1c1818u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c181c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1c181cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1c1820: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c1820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1c1824: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1c1824u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1828: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1c1828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1c182c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x1c182cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1830: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1c1830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1c1834: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x1c1834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x1c1838: 0x8fb600b0  lw          $s6, 0xB0($sp)
    ctx->pc = 0x1c1838u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c183c: 0x8fb300b8  lw          $s3, 0xB8($sp)
    ctx->pc = 0x1c183cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1c1840: 0x1522000d  bne         $t1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C1840u;
    {
        const bool branch_taken_0x1c1840 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C1844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1840u;
        // 0x1c1844: 0x8fbe00c0  lw          $fp, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1840) {
            ctx->pc = 0x1C1878u;
            goto label_1c1878;
        }
    }
    ctx->pc = 0x1C1848u;
    // 0x1c1848: 0x55400036  bnel        $t2, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x1C1848u;
    {
        const bool branch_taken_0x1c1848 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1848) {
            ctx->pc = 0x1C184Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C1848u;
            // 0x1c184c: 0x1080c0  sll         $s0, $s0, 3 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C1924u;
            goto label_1c1924;
        }
    }
    ctx->pc = 0x1C1850u;
    // 0x1c1850: 0x56600034  bnel        $s3, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x1C1850u;
    {
        const bool branch_taken_0x1c1850 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1850) {
            ctx->pc = 0x1C1854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C1850u;
            // 0x1c1854: 0x1080c0  sll         $s0, $s0, 3 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C1924u;
            goto label_1c1924;
        }
    }
    ctx->pc = 0x1C1858u;
    // 0x1c1858: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1C1858u;
    SET_GPR_U32(ctx, 31, 0x1C1860u);
    ctx->pc = 0x1C185Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1858u;
    // 0x1c185c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1C1858u, 0x1C1860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1860u;
label_1c1860:
    // 0x1c1860: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1c1860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1864: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1c1864u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1c1868: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1c1868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c186c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1c186cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x1c1870: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1C1870u;
    {
        const bool branch_taken_0x1c1870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1870u;
        // 0x1c1874: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1870) {
            ctx->pc = 0x1C1920u;
            goto label_1c1920;
        }
    }
    ctx->pc = 0x1C1878u;
label_1c1878:
    // 0x1c1878: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c1878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c187c: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1C187Cu;
    SET_GPR_U32(ctx, 31, 0x1C1884u);
    ctx->pc = 0x1C1880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C187Cu;
    // 0x1c1880: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1C187Cu, 0x1C1884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1884u;
label_1c1884:
    // 0x1c1884: 0x1088c0  sll         $s1, $s0, 3
    ctx->pc = 0x1c1884u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1c1888: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1c1888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c188c: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x1c188cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1c1890: 0x2912821  addu        $a1, $s4, $s1
    ctx->pc = 0x1c1890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x1c1894: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c1894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1898: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x1c1898u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1c189c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1c189cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c18a0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1c18a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1c18a4: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1c18a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c18a8: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x1c18a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c18ac: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x1c18acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c18b0: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x1c18b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c18b4: 0xc070664  jal         func_1C1990
    ctx->pc = 0x1C18B4u;
    SET_GPR_U32(ctx, 31, 0x1C18BCu);
    ctx->pc = 0x1C18B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C18B4u;
    // 0x1c18b8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1990u, 0x1C18B4u, 0x1C18BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C18BCu;
label_1c18bc:
    // 0x1c18bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c18bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c18c0: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1C18C0u;
    SET_GPR_U32(ctx, 31, 0x1C18C8u);
    ctx->pc = 0x1C18C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C18C0u;
    // 0x1c18c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1C18C0u, 0x1C18C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C18C8u;
label_1c18c8:
    // 0x1c18c8: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x1c18c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1c18cc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1c18ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1c18d0: 0x2912821  addu        $a1, $s4, $s1
    ctx->pc = 0x1c18d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x1c18d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c18d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c18d8: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1c18d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c18dc: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1c18dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c18e0: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x1c18e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c18e4: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x1c18e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c18e8: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x1c18e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c18ec: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1c18ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1c18f0: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x1c18f0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c18f4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1c18f4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c18f8: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x1c18f8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c18fc: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1c18fcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c1900: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1c1900u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c1904: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1c1904u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c1908: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1c1908u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c190c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1c190cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c1910: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1c1910u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c1914: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c1914u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1918: 0x8070664  j           func_1C1990
    ctx->pc = 0x1C1918u;
    ctx->pc = 0x1C191Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1918u;
    // 0x1c191c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1990u;
    _motionVector_0x1c1990(rdram, ctx, runtime); return;
    ctx->pc = 0x1C1920u;
label_1c1920:
    // 0x1c1920: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x1c1920u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_1c1924:
    // 0x1c1924: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c1924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1928: 0x2908021  addu        $s0, $s4, $s0
    ctx->pc = 0x1c1928u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x1c192c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1c192cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1930: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1c1930u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1934: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x1c1934u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1938: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x1c1938u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c193c: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x1c193cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1940: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c1940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1944: 0xc070664  jal         func_1C1990
    ctx->pc = 0x1C1944u;
    SET_GPR_U32(ctx, 31, 0x1C194Cu);
    ctx->pc = 0x1C1948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1944u;
    // 0x1c1948: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1990u, 0x1C1944u, 0x1C194Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C194Cu;
label_1c194c:
    // 0x1c194c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c194cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c1950: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1c1950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c1954: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1c1954u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x1c1958: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x1c1958u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x1c195c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1c195cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1c1960: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x1c1960u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c1964: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x1c1964u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c1968: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1c1968u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c196c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1c196cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c1970: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1c1970u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c1974: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1c1974u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c1978: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1c1978u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c197c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1c197cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c1980: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c1980u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1984: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1984u;
        // 0x1c1988: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C198Cu;
}
