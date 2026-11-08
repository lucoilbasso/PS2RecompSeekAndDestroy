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

// Function: entry_0017fe18
// Address: 0x17fe18 - 0x17fea8
void entry_0017fe18_0x17fe18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017fe18_0x17fe18");
#endif

    switch (ctx->pc) {
        case 0x17fe58u: goto label_17fe58;
        default: break;
    }

    ctx->pc = 0x17fe18u;

    // 0x17fe18: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x17fe18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x17fe1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17fe1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fe20: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x17fe20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x17fe24: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x17fe24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fe28: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x17fe28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x17fe2c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x17fe2cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fe30: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x17fe30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x17fe34: 0x8c480008  lw          $t0, 0x8($v0)
    ctx->pc = 0x17fe34u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x17fe38: 0x8c490010  lw          $t1, 0x10($v0)
    ctx->pc = 0x17fe38u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x17fe3c: 0x8c470018  lw          $a3, 0x18($v0)
    ctx->pc = 0x17fe3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x17fe40: 0x484021  addu        $t0, $v0, $t0
    ctx->pc = 0x17fe40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x17fe44: 0x8c51001c  lw          $s1, 0x1C($v0)
    ctx->pc = 0x17fe44u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x17fe48: 0x494821  addu        $t1, $v0, $t1
    ctx->pc = 0x17fe48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x17fe4c: 0x473821  addu        $a3, $v0, $a3
    ctx->pc = 0x17fe4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x17fe50: 0xc05ffd0  jal         func_17FF40
    ctx->pc = 0x17FE50u;
    SET_GPR_U32(ctx, 31, 0x17FE58u);
    ctx->pc = 0x17FE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FE50u;
    // 0x17fe54: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FF40u, 0x17FE50u, 0x17FE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FE58u;
label_17fe58:
    // 0x17fe58: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x17fe58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x17fe5c: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x17fe5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x17fe60: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x17fe60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17fe64: 0x46001085  abs.s       $f2, $f2
    ctx->pc = 0x17fe64u;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
    // 0x17fe68: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x17fe68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17fe6c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x17fe6cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x17fe70: 0x460010a8  max.s       $f2, $f2, $f0
    ctx->pc = 0x17fe70u;
    ctx->f[2] = std::max(ctx->f[2], ctx->f[0]);
    // 0x17fe74: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x17fe74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17fe78: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x17fe78u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x17fe7c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x17fe7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17fe80: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x17fe80u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x17fe84: 0x46000868  max.s       $f1, $f1, $f0
    ctx->pc = 0x17fe84u;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[0]);
    // 0x17fe88: 0x460110e8  max.s       $f3, $f2, $f1
    ctx->pc = 0x17fe88u;
    ctx->f[3] = std::max(ctx->f[2], ctx->f[1]);
    // 0x17fe8c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x17fe8cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17fe90: 0xc7848554  lwc1        $f4, -0x7AAC($gp)
    ctx->pc = 0x17fe90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x17fe94: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x17fe94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x17fe98: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x17FE98u;
    {
        const bool branch_taken_0x17fe98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17fe98) {
            ctx->pc = 0x17FE9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17FE98u;
            // 0x17fe9c: 0xc4810004  lwc1        $f1, 0x4($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x17FEA8u;
            return;
        }
    }
    ctx->pc = 0x17FEA0u;
    // 0x17fea0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x17FEA0u;
    {
        const bool branch_taken_0x17fea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FEA0u;
        // 0x17fea4: 0x46141802  mul.s       $f0, $f3, $f20 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fea0) {
            ctx->pc = 0x17FEF0u;
            return;
        }
    }
    ctx->pc = 0x17FEA8u;
}
