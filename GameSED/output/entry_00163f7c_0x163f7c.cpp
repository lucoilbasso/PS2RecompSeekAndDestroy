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

// Function: entry_00163f7c
// Address: 0x163f7c - 0x163fb4
void entry_00163f7c_0x163f7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163f7c_0x163f7c");
#endif

    switch (ctx->pc) {
        case 0x163f88u: goto label_163f88;
        default: break;
    }

    ctx->pc = 0x163f7cu;

    // 0x163f7c: 0x34a50101  ori         $a1, $a1, 0x101
    ctx->pc = 0x163f7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)257);
    // 0x163f80: 0xc06164c  jal         func_185930
    ctx->pc = 0x163F80u;
    SET_GPR_U32(ctx, 31, 0x163F88u);
    ctx->pc = 0x163F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163F80u;
    // 0x163f84: 0x245038e8  addiu       $s0, $v0, 0x38E8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 14568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x163F80u, 0x163F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163F88u;
label_163f88:
    // 0x163f88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x163f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163f8c: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x163f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x163f90: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x163F90u;
    {
        const bool branch_taken_0x163f90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x163f90) {
            ctx->pc = 0x163F94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163F90u;
            // 0x163f94: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163FC4u;
            return;
        }
    }
    ctx->pc = 0x163F98u;
    // 0x163f98: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x163f98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x163f9c: 0x10182b  sltu        $v1, $zero, $s0
    ctx->pc = 0x163f9cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x163fa0: 0xac91001c  sw          $s1, 0x1C($a0)
    ctx->pc = 0x163fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 17));
    // 0x163fa4: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x163fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x163fa8: 0xa4830002  sh          $v1, 0x2($a0)
    ctx->pc = 0x163fa8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x163fac: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x163facu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x163fb0: 0xac900018  sw          $s0, 0x18($a0)
    ctx->pc = 0x163fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 16));
    ctx->pc = 0x163fb4u;
}
