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

// Function: entry_001a4f50
// Address: 0x1a4f50 - 0x1a4fa8
void entry_001a4f50_0x1a4f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4f50_0x1a4f50");
#endif

    switch (ctx->pc) {
        case 0x1a4fa0u: goto label_1a4fa0;
        default: break;
    }

    ctx->pc = 0x1a4f50u;

label_1a4f50:
    // 0x1a4f50: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a4f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1a4f54:
    // 0x1a4f54: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a4f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a4f58:
    // 0x1a4f58: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1a4f58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1a4f5c:
    // 0x1a4f5c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1a4f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1a4f60:
    // 0x1a4f60: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x1a4f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1a4f64:
    // 0x1a4f64: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x1a4f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a4f68:
    // 0x1a4f68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a4f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a4f6c:
    // 0x1a4f6c: 0xc4e20020  lwc1        $f2, 0x20($a3)
    ctx->pc = 0x1a4f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a4f70:
    // 0x1a4f70: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x1a4f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
label_1a4f74:
    // 0x1a4f74: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1a4f74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1a4f78:
    // 0x1a4f78: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x1a4f78u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
label_1a4f7c:
    // 0x1a4f7c: 0x3c012022  lui         $at, 0x2022
    ctx->pc = 0x1a4f7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8226 << 16));
label_1a4f80:
    // 0x1a4f80: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x1a4f80u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
label_1a4f84:
    // 0x1a4f84: 0xc420f640  lwc1        $f0, -0x9C0($at)
    ctx->pc = 0x1a4f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294964800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a4f88:
    // 0x1a4f88: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a4f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a4f8c:
    // 0x1a4f8c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1a4f8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1a4f90:
    // 0x1a4f90: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1a4f94:
    if (ctx->pc == 0x1A4F94u) {
        ctx->pc = 0x1A4F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4F90u;
        // 0x1a4f94: 0x46020b00  add.s       $f12, $f1, $f2 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4F98u;
        goto label_1a4f98;
    }
    ctx->pc = 0x1A4F90u;
    {
        const bool branch_taken_0x1a4f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4F90u;
        // 0x1a4f94: 0x46020b00  add.s       $f12, $f1, $f2 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4f90) {
            ctx->pc = 0x1A4FA8u;
            return;
        }
    }
    ctx->pc = 0x1A4F98u;
label_1a4f98:
    // 0x1a4f98: 0x40f809  jalr        $v0
label_1a4f9c:
    if (ctx->pc == 0x1A4F9Cu) {
        ctx->pc = 0x1A4FA0u;
        goto label_1a4fa0;
    }
    ctx->pc = 0x1A4F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A4FA0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4F98u, 0x1A4FA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A4FA0u;
label_1a4fa0:
    // 0x1a4fa0: 0x1000000d  b           . + 4 + (0xD << 2)
label_1a4fa4:
    if (ctx->pc == 0x1A4FA4u) {
        ctx->pc = 0x1A4FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4FA0u;
        // 0x1a4fa4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4FA8u;
        goto label_fallthrough_0x1a4fa0;
    }
    ctx->pc = 0x1A4FA0u;
    {
        const bool branch_taken_0x1a4fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4FA0u;
        // 0x1a4fa4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4fa0) {
            ctx->pc = 0x1A4FD8u;
            return;
        }
    }
label_fallthrough_0x1a4fa0:
    ctx->pc = 0x1A4FA8u;
}
