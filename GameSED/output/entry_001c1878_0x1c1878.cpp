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

// Function: entry_001c1878
// Address: 0x1c1878 - 0x1c1920
void entry_001c1878_0x1c1878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1878_0x1c1878");
#endif

    switch (ctx->pc) {
        case 0x1c1884u: goto label_1c1884;
        case 0x1c18bcu: goto label_1c18bc;
        case 0x1c18c8u: goto label_1c18c8;
        default: break;
    }

    ctx->pc = 0x1c1878u;

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
}
