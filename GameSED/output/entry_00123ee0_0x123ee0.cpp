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

// Function: entry_00123ee0
// Address: 0x123ee0 - 0x123f60
void entry_00123ee0_0x123ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123ee0_0x123ee0");
#endif

    ctx->pc = 0x123ee0u;

    // 0x123ee0: 0x55200045  bnel        $t1, $zero, . + 4 + (0x45 << 2)
    ctx->pc = 0x123EE0u;
    {
        const bool branch_taken_0x123ee0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x123ee0) {
            ctx->pc = 0x123EE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123EE0u;
            // 0x123ee4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x123FF8u;
            return;
        }
    }
    ctx->pc = 0x123EE8u;
    // 0x123ee8: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x123ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x123eec: 0x3c060026  lui         $a2, 0x26
    ctx->pc = 0x123eecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)38 << 16));
    // 0x123ef0: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x123ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x123ef4: 0x24c60e00  addiu       $a2, $a2, 0xE00
    ctx->pc = 0x123ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3584));
    // 0x123ef8: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x123ef8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x123efc: 0x72940  sll         $a1, $a3, 5
    ctx->pc = 0x123efcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x123f00: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x123f00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x123f04: 0xa62021  addu        $a0, $a1, $a2
    ctx->pc = 0x123f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x123f08: 0x46090842  mul.s       $f1, $f1, $f9
    ctx->pc = 0x123f08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[9]);
    // 0x123f0c: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x123f0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x123f10: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x123f10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x123f14: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x123f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x123f18: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x123f18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x123f1c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x123f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x123f20: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x123f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x123f24: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x123f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x123f28: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x123f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x123f2c: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x123f2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x123f30: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x123f30u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x123f34: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x123f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x123f38: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x123f38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x123f3c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x123f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x123f40: 0x28e2000a  slti        $v0, $a3, 0xA
    ctx->pc = 0x123f40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x123f44: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x123f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x123f48: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x123f48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x123f4c: 0x460b4200  add.s       $f8, $f8, $f11
    ctx->pc = 0x123f4cu;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[11]);
    // 0x123f50: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x123F50u;
    {
        const bool branch_taken_0x123f50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123F50u;
        // 0x123f54: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x123f50) {
            ctx->pc = 0x123F60u;
            return;
        }
    }
    ctx->pc = 0x123F58u;
    // 0x123f58: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x123F58u;
    {
        const bool branch_taken_0x123f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123F58u;
        // 0x123f5c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123f58) {
            ctx->pc = 0x123FFCu;
            return;
        }
    }
    ctx->pc = 0x123F60u;
}
