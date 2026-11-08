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

// Function: entry_001cdee8
// Address: 0x1cdee8 - 0x1cdf40
void entry_001cdee8_0x1cdee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cdee8_0x1cdee8");
#endif

    ctx->pc = 0x1cdee8u;

label_1cdee8:
    // 0x1cdee8: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x1cdee8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cdeec: 0xdc450008  ld          $a1, 0x8($v0)
    ctx->pc = 0x1cdeecu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1cdef0: 0xdc460010  ld          $a2, 0x10($v0)
    ctx->pc = 0x1cdef0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1cdef4: 0xdc470018  ld          $a3, 0x18($v0)
    ctx->pc = 0x1cdef4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1cdef8: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x1cdef8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x1cdefc: 0xfc650008  sd          $a1, 0x8($v1)
    ctx->pc = 0x1cdefcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 5));
    // 0x1cdf00: 0xfc660010  sd          $a2, 0x10($v1)
    ctx->pc = 0x1cdf00u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 6));
    // 0x1cdf04: 0xfc670018  sd          $a3, 0x18($v1)
    ctx->pc = 0x1cdf04u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 7));
    // 0x1cdf08: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1cdf08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1cdf0c: 0x0  nop
    ctx->pc = 0x1cdf0cu;
    // NOP
    // 0x1cdf10: 0x0  nop
    ctx->pc = 0x1cdf10u;
    // NOP
    // 0x1cdf14: 0x1457fff4  bne         $v0, $s7, . + 4 + (-0xC << 2)
    ctx->pc = 0x1CDF14u;
    {
        const bool branch_taken_0x1cdf14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        ctx->pc = 0x1CDF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDF14u;
        // 0x1cdf18: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdf14) {
            ctx->pc = 0x1CDEE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdee8;
        }
    }
    ctx->pc = 0x1CDF1Cu;
    // 0x1cdf1c: 0xdee80000  ld          $t0, 0x0($s7)
    ctx->pc = 0x1cdf1cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1cdf20: 0xdee20008  ld          $v0, 0x8($s7)
    ctx->pc = 0x1cdf20u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x1cdf24: 0xdee40010  ld          $a0, 0x10($s7)
    ctx->pc = 0x1cdf24u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x1cdf28: 0xfc680000  sd          $t0, 0x0($v1)
    ctx->pc = 0x1cdf28u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 8));
    // 0x1cdf2c: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x1cdf2cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
    // 0x1cdf30: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1cdf30u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdf34: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x1CDF34u;
    {
        const bool branch_taken_0x1cdf34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDF34u;
        // 0x1cdf38: 0xfc640010  sd          $a0, 0x10($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdf34) {
            ctx->pc = 0x1CE054u;
            return;
        }
    }
    ctx->pc = 0x1CDF3Cu;
    // 0x1cdf3c: 0x0  nop
    ctx->pc = 0x1cdf3cu;
    // NOP
    ctx->pc = 0x1cdf40u;
}
