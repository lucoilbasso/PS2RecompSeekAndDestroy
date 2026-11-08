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

// Function: caseD_6
// Address: 0x112158 - 0x112184
void caseD_6_0x112158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x112158");
#endif

    ctx->pc = 0x112158u;

    // 0x112158: 0x8ee2001c  lw          $v0, 0x1C($s7)
    ctx->pc = 0x112158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 28)));
    // 0x11215c: 0x3414e000  ori         $s4, $zero, 0xE000
    ctx->pc = 0x11215cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57344);
    // 0x112160: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x112160u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x112164: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x112164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x112168: 0x24900020  addiu       $s0, $a0, 0x20
    ctx->pc = 0x112168u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x11216c: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x11216cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x112170: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x112170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x112174: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x112174u;
    {
        const bool branch_taken_0x112174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112174u;
        // 0x112178: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112174) {
            ctx->pc = 0x112184u;
            return;
        }
    }
    ctx->pc = 0x11217Cu;
    // 0x11217c: 0xc061920  jal         func_186480
    ctx->pc = 0x11217Cu;
    SET_GPR_U32(ctx, 31, 0x112184u);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x11217Cu, 0x112184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112184u;
}
