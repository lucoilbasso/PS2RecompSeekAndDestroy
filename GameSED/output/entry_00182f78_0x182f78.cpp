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

// Function: entry_00182f78
// Address: 0x182f78 - 0x182fa4
void entry_00182f78_0x182f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00182f78_0x182f78");
#endif

    ctx->pc = 0x182f78u;

    // 0x182f78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x182f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x182f7c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x182f7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182f80: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x182f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x182f84: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x182f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x182f88: 0x8e050048  lw          $a1, 0x48($s0)
    ctx->pc = 0x182f88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x182f8c: 0xc60c0020  lwc1        $f12, 0x20($s0)
    ctx->pc = 0x182f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x182f90: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x182F90u;
    {
        const bool branch_taken_0x182f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x182F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182F90u;
        // 0x182f94: 0x8e080028  lw          $t0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182f90) {
            ctx->pc = 0x182FA4u;
            return;
        }
    }
    ctx->pc = 0x182F98u;
    // 0x182f98: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x182f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x182f9c: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x182f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x182fa0: 0x24470001  addiu       $a3, $v0, 0x1
    ctx->pc = 0x182fa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->pc = 0x182fa4u;
}
