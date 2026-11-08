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

// Function: entry_00145030
// Address: 0x145030 - 0x14505c
void entry_00145030_0x145030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145030_0x145030");
#endif

    ctx->pc = 0x145030u;

    // 0x145030: 0x24a20040  addiu       $v0, $a1, 0x40
    ctx->pc = 0x145030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x145034: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x145034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x145038: 0x704410c8  pmaxw       $v0, $v0, $a0
    ctx->pc = 0x145038u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x14503c: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x14503cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x145040: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x145040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x145044: 0x2c420080  sltiu       $v0, $v0, 0x80
    ctx->pc = 0x145044u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x145048: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x145048u;
    {
        const bool branch_taken_0x145048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14504Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145048u;
        // 0x14504c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145048) {
            ctx->pc = 0x14505Cu;
            return;
        }
    }
    ctx->pc = 0x145050u;
    // 0x145050: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x145050u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x145054: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x145054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x145058: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x145058u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x14505cu;
}
