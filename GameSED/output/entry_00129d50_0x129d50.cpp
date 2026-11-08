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

// Function: entry_00129d50
// Address: 0x129d50 - 0x129dc4
void entry_00129d50_0x129d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00129d50_0x129d50");
#endif

    ctx->pc = 0x129d50u;

    // 0x129d50: 0xc662000c  lwc1        $f2, 0xC($s3)
    ctx->pc = 0x129d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x129d54: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x129d54u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x129d58: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x129d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x129d5c: 0x2ae20028  slti        $v0, $s7, 0x28
    ctx->pc = 0x129d5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x129d60: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x129d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x129d64: 0x4602b581  sub.s       $f22, $f22, $f2
    ctx->pc = 0x129d64u;
    ctx->f[22] = FPU_SUB_S(ctx->f[22], ctx->f[2]);
    // 0x129d68: 0x4600c601  sub.s       $f24, $f24, $f0
    ctx->pc = 0x129d68u;
    ctx->f[24] = FPU_SUB_S(ctx->f[24], ctx->f[0]);
    // 0x129d6c: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x129d6cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x129d70: 0x4601ad40  add.s       $f21, $f21, $f1
    ctx->pc = 0x129d70u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
    // 0x129d74: 0x1440fede  bnez        $v0, . + 4 + (-0x122 << 2)
    ctx->pc = 0x129D74u;
    {
        const bool branch_taken_0x129d74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x129D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129D74u;
        // 0x129d78: 0x461da500  add.s       $f20, $f20, $f29 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[29]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x129d74) {
            ctx->pc = 0x1298F0u;
            return;
        }
    }
    ctx->pc = 0x129D7Cu;
    // 0x129d7c: 0x1ac00011  blez        $s6, . + 4 + (0x11 << 2)
    ctx->pc = 0x129D7Cu;
    {
        const bool branch_taken_0x129d7c = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x129D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129D7Cu;
        // 0x129d80: 0x8fa600d4  lw          $a2, 0xD4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129d7c) {
            ctx->pc = 0x129DC4u;
            return;
        }
    }
    ctx->pc = 0x129D84u;
    // 0x129d84: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x129d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x129d88: 0x3403a000  ori         $v1, $zero, 0xA000
    ctx->pc = 0x129d88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x129d8c: 0x31bfc  dsll32      $v1, $v1, 15
    ctx->pc = 0x129d8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 15));
    // 0x129d90: 0x2c21025  or          $v0, $s6, $v0
    ctx->pc = 0x129d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) | GPR_U64(ctx, 2));
    // 0x129d94: 0x3404e800  ori         $a0, $zero, 0xE800
    ctx->pc = 0x129d94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59392);
    // 0x129d98: 0x421bc  dsll32      $a0, $a0, 6
    ctx->pc = 0x129d98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 6));
    // 0x129d9c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x129d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x129da0: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x129da0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x129da4: 0x3463242e  ori         $v1, $v1, 0x242E
    ctx->pc = 0x129da4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9262);
    // 0x129da8: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x129da8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x129dac: 0x52ff8  dsll        $a1, $a1, 31
    ctx->pc = 0x129dacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 31);
    // 0x129db0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x129db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x129db4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x129db4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x129db8: 0xfd230008  sd          $v1, 0x8($t1)
    ctx->pc = 0x129db8u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 3));
    // 0x129dbc: 0xfd220000  sd          $v0, 0x0($t1)
    ctx->pc = 0x129dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 2));
    // 0x129dc0: 0x8fa600d4  lw          $a2, 0xD4($sp)
    ctx->pc = 0x129dc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    ctx->pc = 0x129dc4u;
}
