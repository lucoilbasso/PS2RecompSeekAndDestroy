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

// Function: entry_00150494
// Address: 0x150494 - 0x1504dc
void entry_00150494_0x150494(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150494_0x150494");
#endif

    ctx->pc = 0x150494u;

    // 0x150494: 0x16e40011  bne         $s7, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x150494u;
    {
        const bool branch_taken_0x150494 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 4));
        ctx->pc = 0x150498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150494u;
        // 0x150498: 0xae620014  sw          $v0, 0x14($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150494) {
            ctx->pc = 0x1504DCu;
            return;
        }
    }
    ctx->pc = 0x15049Cu;
    // 0x15049c: 0xe64101e8  swc1        $f1, 0x1E8($s2)
    ctx->pc = 0x15049cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 488), bits); }
    // 0x1504a0: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x1504a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1504a4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1504a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1504a8: 0xe64001e0  swc1        $f0, 0x1E0($s2)
    ctx->pc = 0x1504a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 480), bits); }
    // 0x1504ac: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x1504acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x1504b0: 0xae4301ec  sw          $v1, 0x1EC($s2)
    ctx->pc = 0x1504b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 492), GPR_U32(ctx, 3));
    // 0x1504b4: 0x7a620000  lq          $v0, 0x0($s3)
    ctx->pc = 0x1504b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1504b8: 0x7fc20000  sq          $v0, 0x0($fp)
    ctx->pc = 0x1504b8u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 0), GPR_VEC(ctx, 2));
    // 0x1504bc: 0x8ea30328  lw          $v1, 0x328($s5)
    ctx->pc = 0x1504bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 808)));
    // 0x1504c0: 0x8e420184  lw          $v0, 0x184($s2)
    ctx->pc = 0x1504c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 388)));
    // 0x1504c4: 0x8c644028  lw          $a0, 0x4028($v1)
    ctx->pc = 0x1504c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16424)));
    // 0x1504c8: 0x8c654024  lw          $a1, 0x4024($v1)
    ctx->pc = 0x1504c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16420)));
    // 0x1504cc: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x1504ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x1504d0: 0xae4401f4  sw          $a0, 0x1F4($s2)
    ctx->pc = 0x1504d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 500), GPR_U32(ctx, 4));
    // 0x1504d4: 0xae4501f0  sw          $a1, 0x1F0($s2)
    ctx->pc = 0x1504d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 496), GPR_U32(ctx, 5));
    // 0x1504d8: 0xae420184  sw          $v0, 0x184($s2)
    ctx->pc = 0x1504d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 388), GPR_U32(ctx, 2));
    ctx->pc = 0x1504dcu;
}
