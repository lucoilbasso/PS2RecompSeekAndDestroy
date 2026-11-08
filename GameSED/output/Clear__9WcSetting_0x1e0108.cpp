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

// Function: Clear__9WcSetting
// Address: 0x1e0108 - 0x1e014c
void Clear__9WcSetting_0x1e0108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Clear__9WcSetting_0x1e0108");
#endif

    switch (ctx->pc) {
        case 0x1e0134u: goto label_1e0134;
        default: break;
    }

    ctx->pc = 0x1e0108u;

    // 0x1e0108: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e0108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e010c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e010cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e0110: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e0110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e0114: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e0114u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0118: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1e0118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1e011c: 0xc78c85bc  lwc1        $f12, -0x7A44($gp)
    ctx->pc = 0x1e011cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e0120: 0xae020198  sw          $v0, 0x198($s0)
    ctx->pc = 0x1e0120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 408), GPR_U32(ctx, 2));
    // 0x1e0124: 0xae000240  sw          $zero, 0x240($s0)
    ctx->pc = 0x1e0124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 576), GPR_U32(ctx, 0));
    // 0x1e0128: 0xae000244  sw          $zero, 0x244($s0)
    ctx->pc = 0x1e0128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 580), GPR_U32(ctx, 0));
    // 0x1e012c: 0xc067a5e  jal         func_19E978
    ctx->pc = 0x1E012Cu;
    SET_GPR_U32(ctx, 31, 0x1E0134u);
    ctx->pc = 0x1E0130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E012Cu;
    // 0x1e0130: 0xae000248  sw          $zero, 0x248($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 584), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E978u, 0x1E012Cu, 0x1E0134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0134u;
label_1e0134:
    // 0x1e0134: 0x21023  negu        $v0, $v0
    ctx->pc = 0x1e0134u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1e0138: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e0138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e013c: 0xae02019c  sw          $v0, 0x19C($s0)
    ctx->pc = 0x1e013cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 412), GPR_U32(ctx, 2));
    // 0x1e0140: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e0140u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0144: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0144u;
        // 0x1e0148: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E014Cu;
}
