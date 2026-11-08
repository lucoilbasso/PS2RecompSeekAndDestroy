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

// Function: entry_00146360
// Address: 0x146360 - 0x1463a8
void entry_00146360_0x146360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00146360_0x146360");
#endif

    ctx->pc = 0x146360u;

    // 0x146360: 0x3c014370  lui         $at, 0x4370
    ctx->pc = 0x146360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17264 << 16));
    // 0x146364: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x146364u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x146368: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x146368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14636c: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x14636cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146370: 0x28a42001  slti        $a0, $a1, 0x2001
    ctx->pc = 0x146370u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8193) ? 1 : 0);
    // 0x146374: 0x8e0204e4  lw          $v0, 0x4E4($s0)
    ctx->pc = 0x146374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1252)));
    // 0x146378: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x146378u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x14637c: 0x3c014396  lui         $at, 0x4396
    ctx->pc = 0x14637cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17302 << 16));
    // 0x146380: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x146380u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x146384: 0x8f838a74  lw          $v1, -0x758C($gp)
    ctx->pc = 0x146384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937204)));
    // 0x146388: 0xae060014  sw          $a2, 0x14($s0)
    ctx->pc = 0x146388u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 6));
    // 0x14638c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14638cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x146390: 0x30487fff  andi        $t0, $v0, 0x7FFF
    ctx->pc = 0x146390u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x146394: 0x460100c0  add.s       $f3, $f0, $f1
    ctx->pc = 0x146394u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x146398: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x146398u;
    {
        const bool branch_taken_0x146398 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x14639Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146398u;
        // 0x14639c: 0xae080004  sw          $t0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146398) {
            ctx->pc = 0x1463A8u;
            return;
        }
    }
    ctx->pc = 0x1463A0u;
    // 0x1463a0: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x1463a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x1463a4: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x1463a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->pc = 0x1463a8u;
}
