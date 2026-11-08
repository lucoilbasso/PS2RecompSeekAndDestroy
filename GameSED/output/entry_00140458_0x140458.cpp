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

// Function: entry_00140458
// Address: 0x140458 - 0x140488
void entry_00140458_0x140458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140458_0x140458");
#endif

    ctx->pc = 0x140458u;

label_140458:
    // 0x140458: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x140458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x14045c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x14045cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x140460: 0x0  nop
    ctx->pc = 0x140460u;
    // NOP
    // 0x140464: 0x0  nop
    ctx->pc = 0x140464u;
    // NOP
    // 0x140468: 0x0  nop
    ctx->pc = 0x140468u;
    // NOP
    // 0x14046c: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14046Cu;
    {
        const bool branch_taken_0x14046c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x140470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14046Cu;
        // 0x140470: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14046c) {
            ctx->pc = 0x140458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_140458;
        }
    }
    ctx->pc = 0x140474u;
    // 0x140474: 0x264201c0  addiu       $v0, $s2, 0x1C0
    ctx->pc = 0x140474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 448));
    // 0x140478: 0xc64001a4  lwc1        $f0, 0x1A4($s2)
    ctx->pc = 0x140478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14047c: 0xac400080  sw          $zero, 0x80($v0)
    ctx->pc = 0x14047cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 0));
    // 0x140480: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x140480u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140484: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x140484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x140488u;
}
