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

// Function: entry_00140348
// Address: 0x140348 - 0x140398
void entry_00140348_0x140348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140348_0x140348");
#endif

    ctx->pc = 0x140348u;

    // 0x140348: 0x1280002c  beqz        $s4, . + 4 + (0x2C << 2)
    ctx->pc = 0x140348u;
    {
        const bool branch_taken_0x140348 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x140348) {
            ctx->pc = 0x1403FCu;
            return;
        }
    }
    ctx->pc = 0x140350u;
    // 0x140350: 0x8e220184  lw          $v0, 0x184($s1)
    ctx->pc = 0x140350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
    // 0x140354: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x140354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x140358: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x140358u;
    {
        const bool branch_taken_0x140358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x140358) {
            ctx->pc = 0x140398u;
            return;
        }
    }
    ctx->pc = 0x140360u;
    // 0x140360: 0xc7808148  lwc1        $f0, -0x7EB8($gp)
    ctx->pc = 0x140360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140364: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x140364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x140368: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x140368u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x14036c: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x14036cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x140370: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x140370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x140374: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x140374u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x140378: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x140378u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x14037c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x14037cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x140380: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x140380u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x140384: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x140384u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x140388: 0x46020569  min.s       $f21, $f0, $f2
    ctx->pc = 0x140388u;
    ctx->f[21] = std::min(ctx->f[0], ctx->f[2]);
    // 0x14038c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x14038Cu;
    {
        const bool branch_taken_0x14038c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14038Cu;
        // 0x140390: 0x46001d06  mov.s       $f20, $f3 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14038c) {
            ctx->pc = 0x1403E0u;
            return;
        }
    }
    ctx->pc = 0x140394u;
    // 0x140394: 0x0  nop
    ctx->pc = 0x140394u;
    // NOP
    ctx->pc = 0x140398u;
}
