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

// Function: entry_001a3704
// Address: 0x1a3704 - 0x1a3738
void entry_001a3704_0x1a3704(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3704_0x1a3704");
#endif

    ctx->pc = 0x1a3704u;

    // 0x1a3704: 0x10800042  beqz        $a0, . + 4 + (0x42 << 2)
    ctx->pc = 0x1A3704u;
    {
        const bool branch_taken_0x1a3704 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3704u;
        // 0x1a3708: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3704) {
            ctx->pc = 0x1A3810u;
            return;
        }
    }
    ctx->pc = 0x1A370Cu;
    // 0x1a370c: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x1a370cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a3710: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1a3710u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3714: 0xa4a30008  sh          $v1, 0x8($a1)
    ctx->pc = 0x1a3714u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a3718: 0x94c20008  lhu         $v0, 0x8($a2)
    ctx->pc = 0x1a3718u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1a371c: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x1a371cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1a3720: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A3720u;
    {
        const bool branch_taken_0x1a3720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3720) {
            ctx->pc = 0x1A3724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A3720u;
            // 0x1a3724: 0x84a2000e  lh          $v0, 0xE($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A3738u;
            return;
        }
    }
    ctx->pc = 0x1A3728u;
    // 0x1a3728: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x1a3728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a372c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a372cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a3730: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1A3730u;
    {
        const bool branch_taken_0x1a3730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3730u;
        // 0x1a3734: 0x84a30008  lh          $v1, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3730) {
            ctx->pc = 0x1A375Cu;
            return;
        }
    }
    ctx->pc = 0x1A3738u;
}
