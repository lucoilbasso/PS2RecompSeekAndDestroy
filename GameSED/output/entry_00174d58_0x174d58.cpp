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

// Function: entry_00174d58
// Address: 0x174d58 - 0x174d90
void entry_00174d58_0x174d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174d58_0x174d58");
#endif

    switch (ctx->pc) {
        case 0x174d8cu: goto label_174d8c;
        default: break;
    }

    ctx->pc = 0x174d58u;

    // 0x174d58: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x174d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x174d5c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x174d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x174d60: 0x2442d4b8  addiu       $v0, $v0, -0x2B48
    ctx->pc = 0x174d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956216));
    // 0x174d64: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x174d64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x174d68: 0x94480004  lhu         $t0, 0x4($v0)
    ctx->pc = 0x174d68u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)FAST_READ16(0x25D4BCu));
    // 0x174d6c: 0x24a5d4b0  addiu       $a1, $a1, -0x2B50
    ctx->pc = 0x174d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956208));
    // 0x174d70: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x174d70u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x25D4B8u));
    // 0x174d74: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x174d74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174d78: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x174d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174d7c: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x174d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x174d80: 0xafa30100  sw          $v1, 0x100($sp)
    ctx->pc = 0x174d80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
    // 0x174d84: 0xc0741de  jal         func_1D0778
    ctx->pc = 0x174D84u;
    SET_GPR_U32(ctx, 31, 0x174D8Cu);
    ctx->pc = 0x174D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174D84u;
    // 0x174d88: 0xa7a80104  sh          $t0, 0x104($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 260), (uint16_t)GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0778u, 0x174D84u, 0x174D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174D8Cu;
label_174d8c:
    // 0x174d8c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x174d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->pc = 0x174d90u;
}
