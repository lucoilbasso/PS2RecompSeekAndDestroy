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

// Function: TransCoord__8WcEntityf11CoordSelectb
// Address: 0x1dcf18 - 0x1dcfcc
void TransCoord__8WcEntityf11CoordSelectb_0x1dcf18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TransCoord__8WcEntityf11CoordSelectb_0x1dcf18");
#endif

    ctx->pc = 0x1dcf18u;

    // 0x1dcf18: 0x14c0000f  bnez        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x1DCF18u;
    {
        const bool branch_taken_0x1dcf18 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF18u;
        // 0x1dcf1c: 0x248700d0  addiu       $a3, $a0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcf18) {
            ctx->pc = 0x1DCF58u;
            goto label_1dcf58;
        }
    }
    ctx->pc = 0x1DCF20u;
    // 0x1dcf20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dcf20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dcf24: 0x50a20024  beql        $a1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1DCF24u;
    {
        const bool branch_taken_0x1dcf24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1dcf24) {
            ctx->pc = 0x1DCF28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DCF24u;
            // 0x1dcf28: 0xe4ec0004  swc1        $f12, 0x4($a3) (Delay Slot)
            { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DCFB8u;
            goto label_1dcfb8;
        }
    }
    ctx->pc = 0x1DCF2Cu;
    // 0x1dcf2c: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x1dcf2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1dcf30: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DCF30u;
    {
        const bool branch_taken_0x1dcf30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF30u;
        // 0x1dcf34: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcf30) {
            ctx->pc = 0x1DCF48u;
            goto label_1dcf48;
        }
    }
    ctx->pc = 0x1DCF38u;
    // 0x1dcf38: 0x50a0001f  beql        $a1, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x1DCF38u;
    {
        const bool branch_taken_0x1dcf38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dcf38) {
            ctx->pc = 0x1DCF3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DCF38u;
            // 0x1dcf3c: 0xe4ec0000  swc1        $f12, 0x0($a3) (Delay Slot)
            { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DCFB8u;
            goto label_1dcfb8;
        }
    }
    ctx->pc = 0x1DCF40u;
    // 0x1dcf40: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1DCF40u;
    {
        const bool branch_taken_0x1dcf40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF40u;
        // 0x1dcf44: 0x24830020  addiu       $v1, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcf40) {
            ctx->pc = 0x1DCFBCu;
            goto label_1dcfbc;
        }
    }
    ctx->pc = 0x1DCF48u;
label_1dcf48:
    // 0x1dcf48: 0x50a2001b  beql        $a1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1DCF48u;
    {
        const bool branch_taken_0x1dcf48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1dcf48) {
            ctx->pc = 0x1DCF4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DCF48u;
            // 0x1dcf4c: 0xe4ec0008  swc1        $f12, 0x8($a3) (Delay Slot)
            { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DCFB8u;
            goto label_1dcfb8;
        }
    }
    ctx->pc = 0x1DCF50u;
    // 0x1dcf50: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1DCF50u;
    {
        const bool branch_taken_0x1dcf50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF50u;
        // 0x1dcf54: 0x24830020  addiu       $v1, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcf50) {
            ctx->pc = 0x1DCFBCu;
            goto label_1dcfbc;
        }
    }
    ctx->pc = 0x1DCF58u;
label_1dcf58:
    // 0x1dcf58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dcf58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dcf5c: 0x50a20010  beql        $a1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1DCF5Cu;
    {
        const bool branch_taken_0x1dcf5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1dcf5c) {
            ctx->pc = 0x1DCF60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DCF5Cu;
            // 0x1dcf60: 0xc4e00004  lwc1        $f0, 0x4($a3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DCFA0u;
            goto label_1dcfa0;
        }
    }
    ctx->pc = 0x1DCF64u;
    // 0x1dcf64: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x1dcf64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1dcf68: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DCF68u;
    {
        const bool branch_taken_0x1dcf68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF68u;
        // 0x1dcf6c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcf68) {
            ctx->pc = 0x1DCF80u;
            goto label_1dcf80;
        }
    }
    ctx->pc = 0x1DCF70u;
    // 0x1dcf70: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DCF70u;
    {
        const bool branch_taken_0x1dcf70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dcf70) {
            ctx->pc = 0x1DCF74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DCF70u;
            // 0x1dcf74: 0xc4e00000  lwc1        $f0, 0x0($a3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DCF90u;
            goto label_1dcf90;
        }
    }
    ctx->pc = 0x1DCF78u;
    // 0x1dcf78: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1DCF78u;
    {
        const bool branch_taken_0x1dcf78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF78u;
        // 0x1dcf7c: 0x24830020  addiu       $v1, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcf78) {
            ctx->pc = 0x1DCFBCu;
            goto label_1dcfbc;
        }
    }
    ctx->pc = 0x1DCF80u;
label_1dcf80:
    // 0x1dcf80: 0x50a2000b  beql        $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1DCF80u;
    {
        const bool branch_taken_0x1dcf80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1dcf80) {
            ctx->pc = 0x1DCF84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DCF80u;
            // 0x1dcf84: 0xc4e00008  lwc1        $f0, 0x8($a3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DCFB0u;
            goto label_1dcfb0;
        }
    }
    ctx->pc = 0x1DCF88u;
    // 0x1dcf88: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1DCF88u;
    {
        const bool branch_taken_0x1dcf88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF88u;
        // 0x1dcf8c: 0x24830020  addiu       $v1, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcf88) {
            ctx->pc = 0x1DCFBCu;
            goto label_1dcfbc;
        }
    }
    ctx->pc = 0x1DCF90u;
label_1dcf90:
    // 0x1dcf90: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x1dcf90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x1dcf94: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1DCF94u;
    {
        const bool branch_taken_0x1dcf94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF94u;
        // 0x1dcf98: 0xe4e00000  swc1        $f0, 0x0($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcf94) {
            ctx->pc = 0x1DCFB8u;
            goto label_1dcfb8;
        }
    }
    ctx->pc = 0x1DCF9Cu;
    // 0x1dcf9c: 0x0  nop
    ctx->pc = 0x1dcf9cu;
    // NOP
label_1dcfa0:
    // 0x1dcfa0: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x1dcfa0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x1dcfa4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1DCFA4u;
    {
        const bool branch_taken_0x1dcfa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCFA4u;
        // 0x1dcfa8: 0xe4e00004  swc1        $f0, 0x4($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcfa4) {
            ctx->pc = 0x1DCFB8u;
            goto label_1dcfb8;
        }
    }
    ctx->pc = 0x1DCFACu;
    // 0x1dcfac: 0x0  nop
    ctx->pc = 0x1dcfacu;
    // NOP
label_1dcfb0:
    // 0x1dcfb0: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x1dcfb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x1dcfb4: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x1dcfb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
label_1dcfb8:
    // 0x1dcfb8: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x1dcfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_1dcfbc:
    // 0x1dcfbc: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x1dcfbcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1dcfc0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1dcfc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1dcfc4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCFC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCFC4u;
        // 0x1dcfc8: 0xa4620002  sh          $v0, 0x2($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCFC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCFCCu;
}
