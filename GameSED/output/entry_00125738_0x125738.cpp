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

// Function: entry_00125738
// Address: 0x125738 - 0x125784
void entry_00125738_0x125738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00125738_0x125738");
#endif

    ctx->pc = 0x125738u;

label_125738:
    // 0x125738: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x125738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12573c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x12573cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x125740: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x125740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x125744: 0x46050082  mul.s       $f2, $f0, $f5
    ctx->pc = 0x125744u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x125748: 0x460408c2  mul.s       $f3, $f1, $f4
    ctx->pc = 0x125748u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x12574c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x12574cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x125750: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x125750u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x125754: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x125754u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x125758: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x125758u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12575c: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x12575cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x125760: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x125760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x125764: 0x461fff4  bgez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x125764u;
    {
        const bool branch_taken_0x125764 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x125768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125764u;
        // 0x125768: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125764) {
            ctx->pc = 0x125738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_125738;
        }
    }
    ctx->pc = 0x12576Cu;
    // 0x12576c: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x12576cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x125770: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x125770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x125774: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x125774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
    // 0x125778: 0x28420012  slti        $v0, $v0, 0x12
    ctx->pc = 0x125778u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x12577c: 0x1440fe6c  bnez        $v0, . + 4 + (-0x194 << 2)
    ctx->pc = 0x12577Cu;
    {
        const bool branch_taken_0x12577c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12577c) {
            ctx->pc = 0x125130u;
            return;
        }
    }
    ctx->pc = 0x125784u;
}
