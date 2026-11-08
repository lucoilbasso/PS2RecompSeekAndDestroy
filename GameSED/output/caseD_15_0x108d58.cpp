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

// Function: caseD_15
// Address: 0x108d58 - 0x108d88
void caseD_15_0x108d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_15_0x108d58");
#endif

    switch (ctx->pc) {
        case 0x108d68u: goto label_108d68;
        case 0x108d80u: goto label_108d80;
        default: break;
    }

    ctx->pc = 0x108d58u;

    // 0x108d58: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x108d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108d5c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x108d5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108d60: 0xc042144  jal         func_108510
    ctx->pc = 0x108D60u;
    SET_GPR_U32(ctx, 31, 0x108D68u);
    ctx->pc = 0x108D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108D60u;
    // 0x108d64: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108510u, 0x108D60u, 0x108D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108D68u;
label_108d68:
    // 0x108d68: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x108d68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x108d6c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x108d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108d70: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x108d70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108d74: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x108d74u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x108d78: 0xc0694d2  jal         func_1A5348
    ctx->pc = 0x108D78u;
    SET_GPR_U32(ctx, 31, 0x108D80u);
    ctx->pc = 0x108D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108D78u;
    // 0x108d7c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5348u, 0x108D78u, 0x108D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108D80u;
label_108d80:
    // 0x108d80: 0x100000e0  b           . + 4 + (0xE0 << 2)
    ctx->pc = 0x108D80u;
    {
        const bool branch_taken_0x108d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108D80u;
        // 0x108d84: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108d80) {
            ctx->pc = 0x109104u;
            return;
        }
    }
    ctx->pc = 0x108D88u;
}
