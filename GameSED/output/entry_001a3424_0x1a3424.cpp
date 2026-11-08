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

// Function: entry_001a3424
// Address: 0x1a3424 - 0x1a3468
void entry_001a3424_0x1a3424(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3424_0x1a3424");
#endif

    ctx->pc = 0x1a3424u;

    // 0x1a3424: 0x16620048  bne         $s3, $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x1A3424u;
    {
        const bool branch_taken_0x1a3424 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A3428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3424u;
        // 0x1a3428: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3424) {
            ctx->pc = 0x1A3548u;
            return;
        }
    }
    ctx->pc = 0x1A342Cu;
    // 0x1a342c: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1a342cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a3430: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a3430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a3434: 0xa602000a  sh          $v0, 0xA($s0)
    ctx->pc = 0x1a3434u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a3438: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1a3438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a343c: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x1a343cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a3440: 0xa6030008  sh          $v1, 0x8($s0)
    ctx->pc = 0x1a3440u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a3444: 0x96420008  lhu         $v0, 0x8($s2)
    ctx->pc = 0x1a3444u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1a3448: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x1a3448u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1a344c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A344Cu;
    {
        const bool branch_taken_0x1a344c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A344Cu;
        // 0x1a3450: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a344c) {
            ctx->pc = 0x1A3468u;
            return;
        }
    }
    ctx->pc = 0x1A3454u;
    // 0x1a3454: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1a3454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a3458: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a3458u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a345c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1A345Cu;
    {
        const bool branch_taken_0x1a345c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A345Cu;
        // 0x1a3460: 0x84e30008  lh          $v1, 0x8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a345c) {
            ctx->pc = 0x1A3494u;
            return;
        }
    }
    ctx->pc = 0x1A3464u;
    // 0x1a3464: 0x0  nop
    ctx->pc = 0x1a3464u;
    // NOP
    ctx->pc = 0x1a3468u;
}
