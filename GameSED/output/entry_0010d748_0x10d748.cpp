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

// Function: entry_0010d748
// Address: 0x10d748 - 0x10d770
void entry_0010d748_0x10d748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d748_0x10d748");
#endif

    ctx->pc = 0x10d748u;

    // 0x10d748: 0x8ce201b8  lw          $v0, 0x1B8($a3)
    ctx->pc = 0x10d748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 440)));
    // 0x10d74c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x10D74Cu;
    {
        const bool branch_taken_0x10d74c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D74Cu;
        // 0x10d750: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d74c) {
            ctx->pc = 0x10D7D0u;
            return;
        }
    }
    ctx->pc = 0x10D754u;
    // 0x10d754: 0x8ce301bc  lw          $v1, 0x1BC($a3)
    ctx->pc = 0x10d754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 444)));
    // 0x10d758: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10d758u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10d75c: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x10d75cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x10d760: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x10D760u;
    {
        const bool branch_taken_0x10d760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D760u;
        // 0x10d764: 0x8c690000  lw          $t1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d760) {
            ctx->pc = 0x10D7D0u;
            return;
        }
    }
    ctx->pc = 0x10D768u;
    // 0x10d768: 0x25280250  addiu       $t0, $t1, 0x250
    ctx->pc = 0x10d768u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 592));
    // 0x10d76c: 0x8ce201bc  lw          $v0, 0x1BC($a3)
    ctx->pc = 0x10d76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 444)));
    ctx->pc = 0x10d770u;
}
