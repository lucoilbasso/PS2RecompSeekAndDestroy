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

// Function: entry_00161834
// Address: 0x161834 - 0x16185c
void entry_00161834_0x161834(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161834_0x161834");
#endif

    ctx->pc = 0x161834u;

    // 0x161834: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x161834u;
    {
        const bool branch_taken_0x161834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x161838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161834u;
        // 0x161838: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161834) {
            ctx->pc = 0x1618A8u;
            return;
        }
    }
    ctx->pc = 0x16183Cu;
    // 0x16183c: 0x10a0001a  beqz        $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x16183Cu;
    {
        const bool branch_taken_0x16183c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x161840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16183Cu;
        // 0x161840: 0x24911a60  addiu       $s1, $a0, 0x1A60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 6752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16183c) {
            ctx->pc = 0x1618A8u;
            return;
        }
    }
    ctx->pc = 0x161844u;
    // 0x161844: 0xc6210038  lwc1        $f1, 0x38($s1)
    ctx->pc = 0x161844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x161848: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x161848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16184c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x16184cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161850: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x161850u;
    {
        const bool branch_taken_0x161850 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x161854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161850u;
        // 0x161854: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161850) {
            ctx->pc = 0x16185Cu;
            return;
        }
    }
    ctx->pc = 0x161858u;
    // 0x161858: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x161858u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16185cu;
}
