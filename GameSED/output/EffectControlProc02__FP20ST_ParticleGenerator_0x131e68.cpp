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

// Function: EffectControlProc02__FP20ST_ParticleGenerator
// Address: 0x131e68 - 0x131efc
void EffectControlProc02__FP20ST_ParticleGenerator_0x131e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectControlProc02__FP20ST_ParticleGenerator_0x131e68");
#endif

    switch (ctx->pc) {
        case 0x131e90u: goto label_131e90;
        default: break;
    }

    ctx->pc = 0x131e68u;

    // 0x131e68: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x131e68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131e6c: 0x8cc5013c  lw          $a1, 0x13C($a2)
    ctx->pc = 0x131e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 316)));
    // 0x131e70: 0x50a00018  beql        $a1, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x131E70u;
    {
        const bool branch_taken_0x131e70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x131e70) {
            ctx->pc = 0x131E74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131E70u;
            // 0x131e74: 0x8cc40114  lw          $a0, 0x114($a2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131ED4u;
            goto label_131ed4;
        }
    }
    ctx->pc = 0x131E78u;
    // 0x131e78: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x131e78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x131e7c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x131e7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x131e80: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x131e80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x131e84: 0x2447a248  addiu       $a3, $v0, -0x5DB8
    ctx->pc = 0x131e84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943304));
    // 0x131e88: 0x8ca2004c  lw          $v0, 0x4C($a1)
    ctx->pc = 0x131e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x131e8c: 0x0  nop
    ctx->pc = 0x131e8cu;
    // NOP
label_131e90:
    // 0x131e90: 0x5446000d  bnel        $v0, $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x131E90u;
    {
        const bool branch_taken_0x131e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x131e90) {
            ctx->pc = 0x131E94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131E90u;
            // 0x131e94: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131EC8u;
            goto label_131ec8;
        }
    }
    ctx->pc = 0x131E98u;
    // 0x131e98: 0x8ca200e8  lw          $v0, 0xE8($a1)
    ctx->pc = 0x131e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 232)));
    // 0x131e9c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x131E9Cu;
    {
        const bool branch_taken_0x131e9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x131e9c) {
            ctx->pc = 0x131EA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131E9Cu;
            // 0x131ea0: 0xaca200e4  sw          $v0, 0xE4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 228), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131EA4u;
            goto label_131ea4;
        }
    }
    ctx->pc = 0x131EA4u;
label_131ea4:
    // 0x131ea4: 0x8cc40114  lw          $a0, 0x114($a2)
    ctx->pc = 0x131ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 276)));
    // 0x131ea8: 0xe4a000ec  swc1        $f0, 0xEC($a1)
    ctx->pc = 0x131ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 236), bits); }
    // 0x131eac: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x131eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x131eb0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x131eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x131eb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x131eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x131eb8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x131eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x131ebc: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x131ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x131ec0: 0xaca200e8  sw          $v0, 0xE8($a1)
    ctx->pc = 0x131ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 232), GPR_U32(ctx, 2));
    // 0x131ec4: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x131ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_131ec8:
    // 0x131ec8: 0x54a0fff1  bnel        $a1, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x131EC8u;
    {
        const bool branch_taken_0x131ec8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x131ec8) {
            ctx->pc = 0x131ECCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131EC8u;
            // 0x131ecc: 0x8ca2004c  lw          $v0, 0x4C($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131E90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_131e90;
        }
    }
    ctx->pc = 0x131ED0u;
    // 0x131ed0: 0x8cc40114  lw          $a0, 0x114($a2)
    ctx->pc = 0x131ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 276)));
label_131ed4:
    // 0x131ed4: 0xa4c00118  sh          $zero, 0x118($a2)
    ctx->pc = 0x131ed4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 280), (uint16_t)GPR_U32(ctx, 0));
    // 0x131ed8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x131ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x131edc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x131edcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x131ee0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x131ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x131ee4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x131ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x131ee8: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x131ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x131eec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x131eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x131ef0: 0x8c63a258  lw          $v1, -0x5DA8($v1)
    ctx->pc = 0x131ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943320)));
    // 0x131ef4: 0x3e00008  jr          $ra
    ctx->pc = 0x131EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131EF4u;
        // 0x131ef8: 0xacc30134  sw          $v1, 0x134($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 308), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131EF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131EFCu;
}
