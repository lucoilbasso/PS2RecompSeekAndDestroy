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

// Function: EffectControlProc04__FP20ST_ParticleGenerator
// Address: 0x131f00 - 0x131f74
void EffectControlProc04__FP20ST_ParticleGenerator_0x131f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectControlProc04__FP20ST_ParticleGenerator_0x131f00");
#endif

    switch (ctx->pc) {
        case 0x131f20u: goto label_131f20;
        default: break;
    }

    ctx->pc = 0x131f00u;

    // 0x131f00: 0x8c85013c  lw          $a1, 0x13C($a0)
    ctx->pc = 0x131f00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 316)));
    // 0x131f04: 0x10a00018  beqz        $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x131F04u;
    {
        const bool branch_taken_0x131f04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x131F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131F04u;
        // 0x131f08: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131f04) {
            ctx->pc = 0x131F68u;
            goto label_131f68;
        }
    }
    ctx->pc = 0x131F0Cu;
    // 0x131f0c: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x131f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x131f10: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x131f10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x131f14: 0x2446a260  addiu       $a2, $v0, -0x5DA0
    ctx->pc = 0x131f14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943328));
    // 0x131f18: 0x2463a280  addiu       $v1, $v1, -0x5D80
    ctx->pc = 0x131f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943360));
    // 0x131f1c: 0x8ca2004c  lw          $v0, 0x4C($a1)
    ctx->pc = 0x131f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
label_131f20:
    // 0x131f20: 0x5444000e  bnel        $v0, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x131F20u;
    {
        const bool branch_taken_0x131f20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x131f20) {
            ctx->pc = 0x131F24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131F20u;
            // 0x131f24: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131F5Cu;
            goto label_131f5c;
        }
    }
    ctx->pc = 0x131F28u;
    // 0x131f28: 0x8ca200e8  lw          $v0, 0xE8($a1)
    ctx->pc = 0x131f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 232)));
    // 0x131f2c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x131F2Cu;
    {
        const bool branch_taken_0x131f2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x131f2c) {
            ctx->pc = 0x131F30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131F2Cu;
            // 0x131f30: 0xaca200e4  sw          $v0, 0xE4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 228), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131F34u;
            goto label_131f34;
        }
    }
    ctx->pc = 0x131F34u;
label_131f34:
    // 0x131f34: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x131f34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x131f38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x131f38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x131f3c: 0x8ca20044  lw          $v0, 0x44($a1)
    ctx->pc = 0x131f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x131f40: 0xaca600e8  sw          $a2, 0xE8($a1)
    ctx->pc = 0x131f40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 232), GPR_U32(ctx, 6));
    // 0x131f44: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x131F44u;
    {
        const bool branch_taken_0x131f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x131F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131F44u;
        // 0x131f48: 0xe4a000ec  swc1        $f0, 0xEC($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 236), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x131f44) {
            ctx->pc = 0x131F50u;
            goto label_131f50;
        }
    }
    ctx->pc = 0x131F4Cu;
    // 0x131f4c: 0xaca20040  sw          $v0, 0x40($a1)
    ctx->pc = 0x131f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 2));
label_131f50:
    // 0x131f50: 0xe4a00054  swc1        $f0, 0x54($a1)
    ctx->pc = 0x131f50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 84), bits); }
    // 0x131f54: 0xaca30044  sw          $v1, 0x44($a1)
    ctx->pc = 0x131f54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 3));
    // 0x131f58: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x131f58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_131f5c:
    // 0x131f5c: 0x54a0fff0  bnel        $a1, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x131F5Cu;
    {
        const bool branch_taken_0x131f5c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x131f5c) {
            ctx->pc = 0x131F60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131F5Cu;
            // 0x131f60: 0x8ca2004c  lw          $v0, 0x4C($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131F20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_131f20;
        }
    }
    ctx->pc = 0x131F64u;
    // 0x131f64: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x131f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_131f68:
    // 0x131f68: 0xa4800118  sh          $zero, 0x118($a0)
    ctx->pc = 0x131f68u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 280), (uint16_t)GPR_U32(ctx, 0));
    // 0x131f6c: 0x3e00008  jr          $ra
    ctx->pc = 0x131F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131F6Cu;
        // 0x131f70: 0xac820134  sw          $v0, 0x134($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 308), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131F6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131F74u;
}
