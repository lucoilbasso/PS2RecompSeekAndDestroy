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

// Function: ApBgscrBackScreenReset__Fv
// Address: 0x148de8 - 0x148e5c
void ApBgscrBackScreenReset__Fv_0x148de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApBgscrBackScreenReset__Fv_0x148de8");
#endif

    switch (ctx->pc) {
        case 0x148e38u: goto label_148e38;
        default: break;
    }

    ctx->pc = 0x148de8u;

    // 0x148de8: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x148de8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x148dec: 0x3c01c3c8  lui         $at, 0xC3C8
    ctx->pc = 0x148decu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50120 << 16));
    // 0x148df0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x148df0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x148df4: 0x3c01c396  lui         $at, 0xC396
    ctx->pc = 0x148df4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50070 << 16));
    // 0x148df8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x148df8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x148dfc: 0x244226c0  addiu       $v0, $v0, 0x26C0
    ctx->pc = 0x148dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9920));
    // 0x148e00: 0x3c0143c8  lui         $at, 0x43C8
    ctx->pc = 0x148e00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17352 << 16));
    // 0x148e04: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x148e04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x148e08: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x148e08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x148e0c: 0x3c014396  lui         $at, 0x4396
    ctx->pc = 0x148e0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17302 << 16));
    // 0x148e10: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x148e10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x148e14: 0x24450254  addiu       $a1, $v0, 0x254
    ctx->pc = 0x148e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 596));
    // 0x148e18: 0xe44004b0  swc1        $f0, 0x4B0($v0)
    ctx->pc = 0x148e18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x262B70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x262B70u, _value); } while (0); }
    // 0x148e1c: 0x24634280  addiu       $v1, $v1, 0x4280
    ctx->pc = 0x148e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17024));
    // 0x148e20: 0xe44204b4  swc1        $f2, 0x4B4($v0)
    ctx->pc = 0x148e20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x262B74u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x262B74u, _value); } while (0); }
    // 0x148e24: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x148e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148e28: 0xe44304c0  swc1        $f3, 0x4C0($v0)
    ctx->pc = 0x148e28u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x262B80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x262B80u, _value); } while (0); }
    // 0x148e2c: 0xe44104c4  swc1        $f1, 0x4C4($v0)
    ctx->pc = 0x148e2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x262B84u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x262B84u, _value); } while (0); }
    // 0x148e30: 0xac400250  sw          $zero, 0x250($v0)
    ctx->pc = 0x148e30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x262910u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x262910u, _value); } while (0);
    // 0x148e34: 0xac4004f0  sw          $zero, 0x4F0($v0)
    ctx->pc = 0x148e34u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x262BB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x262BB0u, _value); } while (0);
label_148e38:
    // 0x148e38: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x148e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x148e3c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x148e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x148e40: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x148e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x148e44: 0x28820007  slti        $v0, $a0, 0x7
    ctx->pc = 0x148e44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x148e48: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x148e48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x148e4c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x148E4Cu;
    {
        const bool branch_taken_0x148e4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x148E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148E4Cu;
        // 0x148e50: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148e4c) {
            ctx->pc = 0x148E38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_148e38;
        }
    }
    ctx->pc = 0x148E54u;
    // 0x148e54: 0x3e00008  jr          $ra
    ctx->pc = 0x148E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148E54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x148E5Cu;
}
