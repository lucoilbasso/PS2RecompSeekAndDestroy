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

// Function: caseD_17
// Address: 0x110f60 - 0x110f98
void caseD_17_0x110f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_17_0x110f60");
#endif

    switch (ctx->pc) {
        case 0x110f68u: goto label_110f68;
        default: break;
    }

    ctx->pc = 0x110f60u;

    // 0x110f60: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x110F60u;
    SET_GPR_U32(ctx, 31, 0x110F68u);
    ctx->pc = 0x110F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110F60u;
    // 0x110f64: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x110F60u, 0x110F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110F68u;
label_110f68:
    // 0x110f68: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x110f68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x110f6c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x110f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x110f70: 0x8c513630  lw          $s1, 0x3630($v0)
    ctx->pc = 0x110f70u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13872)));
    // 0x110f74: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x110F74u;
    {
        const bool branch_taken_0x110f74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x110F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110F74u;
        // 0x110f78: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110f74) {
            ctx->pc = 0x110F98u;
            return;
        }
    }
    ctx->pc = 0x110F7Cu;
    // 0x110f7c: 0x8e2201ac  lw          $v0, 0x1AC($s1)
    ctx->pc = 0x110f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 428)));
    // 0x110f80: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x110F80u;
    {
        const bool branch_taken_0x110f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x110f80) {
            ctx->pc = 0x110F84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x110F80u;
            // 0x110f84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x110F9Cu;
            return;
        }
    }
    ctx->pc = 0x110F88u;
    // 0x110f88: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x110f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x110f8c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x110F8Cu;
    {
        const bool branch_taken_0x110f8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x110f8c) {
            ctx->pc = 0x110F90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x110F8Cu;
            // 0x110f90: 0x8e2201ac  lw          $v0, 0x1AC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 428)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x110FACu;
            return;
        }
    }
    ctx->pc = 0x110F94u;
    // 0x110f94: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x110f94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    ctx->pc = 0x110f98u;
}
