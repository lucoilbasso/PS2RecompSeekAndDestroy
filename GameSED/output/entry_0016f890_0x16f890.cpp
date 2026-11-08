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

// Function: entry_0016f890
// Address: 0x16f890 - 0x16f8d0
void entry_0016f890_0x16f890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f890_0x16f890");
#endif

    switch (ctx->pc) {
        case 0x16f8a4u: goto label_16f8a4;
        case 0x16f8c4u: goto label_16f8c4;
        default: break;
    }

    ctx->pc = 0x16f890u;

    // 0x16f890: 0x32e20001  andi        $v0, $s7, 0x1
    ctx->pc = 0x16f890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
    // 0x16f894: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x16F894u;
    {
        const bool branch_taken_0x16f894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f894) {
            ctx->pc = 0x16F8D0u;
            return;
        }
    }
    ctx->pc = 0x16F89Cu;
    // 0x16f89c: 0xc06ab72  jal         func_1AADC8
    ctx->pc = 0x16F89Cu;
    SET_GPR_U32(ctx, 31, 0x16F8A4u);
    ctx->pc = 0x16F8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F89Cu;
    // 0x16f8a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AADC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AADC8u, 0x16F89Cu, 0x16F8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F8A4u;
label_16f8a4:
    // 0x16f8a4: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x16f8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x16f8a8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x16f8a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x16f8ac: 0x2484bb60  addiu       $a0, $a0, -0x44A0
    ctx->pc = 0x16f8acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949728));
    // 0x16f8b0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16f8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16f8b4: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x16f8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x16f8b8: 0x23c03  sra         $a3, $v0, 16
    ctx->pc = 0x16f8b8u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 16));
    // 0x16f8bc: 0xc06af1c  jal         func_1ABC70
    ctx->pc = 0x16F8BCu;
    SET_GPR_U32(ctx, 31, 0x16F8C4u);
    ctx->pc = 0x16F8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F8BCu;
    // 0x16f8c0: 0x24060800  addiu       $a2, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABC70u, 0x16F8BCu, 0x16F8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F8C4u;
label_16f8c4:
    // 0x16f8c4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x16F8C4u;
    {
        const bool branch_taken_0x16f8c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f8c4) {
            ctx->pc = 0x16F8F8u;
            return;
        }
    }
    ctx->pc = 0x16F8CCu;
    // 0x16f8cc: 0x0  nop
    ctx->pc = 0x16f8ccu;
    // NOP
    ctx->pc = 0x16f8d0u;
}
