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

// Function: entry_001cbbf4
// Address: 0x1cbbf4 - 0x1cbc44
void entry_001cbbf4_0x1cbbf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cbbf4_0x1cbbf4");
#endif

    ctx->pc = 0x1cbbf4u;

label_1cbbf4:
    // 0x1cbbf4: 0xdc850000  ld          $a1, 0x0($a0)
    ctx->pc = 0x1cbbf4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cbbf8: 0xdc860008  ld          $a2, 0x8($a0)
    ctx->pc = 0x1cbbf8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1cbbfc: 0xdc870010  ld          $a3, 0x10($a0)
    ctx->pc = 0x1cbbfcu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cbc00: 0xdc880018  ld          $t0, 0x18($a0)
    ctx->pc = 0x1cbc00u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1cbc04: 0xfc450000  sd          $a1, 0x0($v0)
    ctx->pc = 0x1cbc04u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
    // 0x1cbc08: 0xfc460008  sd          $a2, 0x8($v0)
    ctx->pc = 0x1cbc08u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 6));
    // 0x1cbc0c: 0xfc470010  sd          $a3, 0x10($v0)
    ctx->pc = 0x1cbc0cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 7));
    // 0x1cbc10: 0xfc480018  sd          $t0, 0x18($v0)
    ctx->pc = 0x1cbc10u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 8));
    // 0x1cbc14: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1cbc14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1cbc18: 0x0  nop
    ctx->pc = 0x1cbc18u;
    // NOP
    // 0x1cbc1c: 0x0  nop
    ctx->pc = 0x1cbc1cu;
    // NOP
    // 0x1cbc20: 0x1483fff4  bne         $a0, $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x1CBC20u;
    {
        const bool branch_taken_0x1cbc20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1CBC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBC20u;
        // 0x1cbc24: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbc20) {
            ctx->pc = 0x1CBBF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cbbf4;
        }
    }
    ctx->pc = 0x1CBC28u;
    // 0x1cbc28: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x1cbc28u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cbc2c: 0xdc850008  ld          $a1, 0x8($a0)
    ctx->pc = 0x1cbc2cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1cbc30: 0xdc860010  ld          $a2, 0x10($a0)
    ctx->pc = 0x1cbc30u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cbc34: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1cbc34u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1cbc38: 0xfc450008  sd          $a1, 0x8($v0)
    ctx->pc = 0x1cbc38u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 5));
    // 0x1cbc3c: 0xfc460010  sd          $a2, 0x10($v0)
    ctx->pc = 0x1cbc3cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 6));
    // 0x1cbc40: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x1cbc40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1cbc44u;
}
