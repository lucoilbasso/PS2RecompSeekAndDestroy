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

// Function: Horizont_Screen_Position__FP9ApcCameraii
// Address: 0x148e60 - 0x148ef8
void Horizont_Screen_Position__FP9ApcCameraii_0x148e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Horizont_Screen_Position__FP9ApcCameraii_0x148e60");
#endif

    ctx->pc = 0x148e60u;

    // 0x148e60: 0x28c22001  slti        $v0, $a2, 0x2001
    ctx->pc = 0x148e60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8193) ? 1 : 0);
    // 0x148e64: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x148E64u;
    {
        const bool branch_taken_0x148e64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x148E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148E64u;
        // 0x148e68: 0x28c2e000  slti        $v0, $a2, -0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294959104) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x148e64) {
            ctx->pc = 0x148E78u;
            goto label_148e78;
        }
    }
    ctx->pc = 0x148E6Cu;
    // 0x148e6c: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x148e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x148e70: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x148e70u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x148e74: 0x28c2e000  slti        $v0, $a2, -0x2000
    ctx->pc = 0x148e74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294959104) ? 1 : 0);
label_148e78:
    // 0x148e78: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x148E78u;
    {
        const bool branch_taken_0x148e78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x148e78) {
            ctx->pc = 0x148E7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x148E78u;
            // 0x148e7c: 0xc53021  addu        $a2, $a2, $a1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x148E8Cu;
            goto label_148e8c;
        }
    }
    ctx->pc = 0x148E80u;
    // 0x148e80: 0x2402c000  addiu       $v0, $zero, -0x4000
    ctx->pc = 0x148e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x148e84: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x148e84u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x148e88: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x148e88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_148e8c:
    // 0x148e8c: 0x240218e3  addiu       $v0, $zero, 0x18E3
    ctx->pc = 0x148e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6371));
    // 0x148e90: 0x70c210e8  pminw       $v0, $a2, $v0
    ctx->pc = 0x148e90u;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x148e94: 0x23000  sll         $a2, $v0, 0
    ctx->pc = 0x148e94u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x148e98: 0x2403e71d  addiu       $v1, $zero, -0x18E3
    ctx->pc = 0x148e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294960925));
    // 0x148e9c: 0x70c318c8  pmaxw       $v1, $a2, $v1
    ctx->pc = 0x148e9cu;
    SET_GPR_VEC(ctx, 3, PS2_PMAXW(GPR_VEC(ctx, 6), GPR_VEC(ctx, 3)));
    // 0x148ea0: 0x33000  sll         $a2, $v1, 0
    ctx->pc = 0x148ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
    // 0x148ea4: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x148ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x148ea8: 0x2484f640  addiu       $a0, $a0, -0x9C0
    ctx->pc = 0x148ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964800));
    // 0x148eac: 0x30c37fff  andi        $v1, $a2, 0x7FFF
    ctx->pc = 0x148eacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32767);
    // 0x148eb0: 0x3c012000  lui         $at, 0x2000
    ctx->pc = 0x148eb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8192 << 16));
    // 0x148eb4: 0x242021  addu        $a0, $at, $a0
    ctx->pc = 0x148eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x148eb8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x148eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x148ebc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x148ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x148ec0: 0x3c0143a0  lui         $at, 0x43A0
    ctx->pc = 0x148ec0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17312 << 16));
    // 0x148ec4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x148ec4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x148ec8: 0x24c22000  addiu       $v0, $a2, 0x2000
    ctx->pc = 0x148ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8192));
    // 0x148ecc: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x148eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x148ed0: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x148ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x148ed4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x148ed4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x148ed8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x148ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x148edc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x148edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x148ee0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x148ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x148ee4: 0x0  nop
    ctx->pc = 0x148ee4u;
    // NOP
    // 0x148ee8: 0x0  nop
    ctx->pc = 0x148ee8u;
    // NOP
    // 0x148eec: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x148eecu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x148ef0: 0x3e00008  jr          $ra
    ctx->pc = 0x148EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148EF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x148EF8u;
}
