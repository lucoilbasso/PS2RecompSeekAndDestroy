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

// Function: sceCdPOffCallback
// Address: 0x1ba170 - 0x1ba1e4
void sceCdPOffCallback_0x1ba170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceCdPOffCallback_0x1ba170");
#endif

    switch (ctx->pc) {
        case 0x1ba1a0u: goto label_1ba1a0;
        case 0x1ba1a8u: goto label_1ba1a8;
        case 0x1ba1c8u: goto label_1ba1c8;
        default: break;
    }

    ctx->pc = 0x1ba170u;

    // 0x1ba170: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ba170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ba174: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1ba174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1ba178: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1ba178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1ba17c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1ba17cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1ba180: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ba180u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba184: 0x8c43c0bc  lw          $v1, -0x3F44($v0)
    ctx->pc = 0x1ba184u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x24C0BCu));
    // 0x1ba188: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ba188u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba18c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ba18cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1ba190: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BA190u;
    {
        const bool branch_taken_0x1ba190 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1BA194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA190u;
        // 0x1ba194: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba190) {
            ctx->pc = 0x1BA1A0u;
            goto label_1ba1a0;
        }
    }
    ctx->pc = 0x1BA198u;
    // 0x1ba198: 0xc06e88a  jal         func_1BA228
    ctx->pc = 0x1BA198u;
    SET_GPR_U32(ctx, 31, 0x1BA1A0u);
    ctx->pc = 0x1BA228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA228u, 0x1BA198u, 0x1BA1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA1A0u;
label_1ba1a0:
    // 0x1ba1a0: 0xc06dae8  jal         func_1B6BA0
    ctx->pc = 0x1BA1A0u;
    SET_GPR_U32(ctx, 31, 0x1BA1A8u);
    ctx->pc = 0x1B6BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BA0u, 0x1BA1A0u, 0x1BA1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA1A8u;
label_1ba1a8:
    // 0x1ba1a8: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1ba1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1ba1ac: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1ba1acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1ba1b0: 0x8c90d684  lw          $s0, -0x297C($a0)
    ctx->pc = 0x1ba1b0u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x40D684u));
    // 0x1ba1b4: 0xac71d688  sw          $s1, -0x2978($v1)
    ctx->pc = 0x1ba1b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x40D688u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x40D688u, _value); } while (0);
    // 0x1ba1b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BA1B8u;
    {
        const bool branch_taken_0x1ba1b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA1B8u;
        // 0x1ba1bc: 0xac92d684  sw          $s2, -0x297C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294956676), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba1b8) {
            ctx->pc = 0x1BA1C8u;
            goto label_1ba1c8;
        }
    }
    ctx->pc = 0x1BA1C0u;
    // 0x1ba1c0: 0xc06dafa  jal         func_1B6BE8
    ctx->pc = 0x1BA1C0u;
    SET_GPR_U32(ctx, 31, 0x1BA1C8u);
    ctx->pc = 0x1B6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BE8u, 0x1BA1C0u, 0x1BA1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA1C8u;
label_1ba1c8:
    // 0x1ba1c8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ba1c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba1cc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ba1ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ba1d0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ba1d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ba1d4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1ba1d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ba1d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ba1d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba1dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA1DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA1DCu;
        // 0x1ba1e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA1DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BA1E4u;
}
