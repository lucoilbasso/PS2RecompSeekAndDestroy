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

// Function: entry_0018cdb0
// Address: 0x18cdb0 - 0x18cddc
void entry_0018cdb0_0x18cdb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018cdb0_0x18cdb0");
#endif

    ctx->pc = 0x18cdb0u;

    // 0x18cdb0: 0x2e61021  addu        $v0, $s7, $a2
    ctx->pc = 0x18cdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 6)));
    // 0x18cdb4: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x18cdb4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18cdb8: 0xa4620002  sh          $v0, 0x2($v1)
    ctx->pc = 0x18cdb8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x18cdbc: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x18CDBCu;
    {
        const bool branch_taken_0x18cdbc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CDBCu;
        // 0x18cdc0: 0x892021  addu        $a0, $a0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cdbc) {
            ctx->pc = 0x18CDDCu;
            return;
        }
    }
    ctx->pc = 0x18CDC4u;
    // 0x18cdc4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x18cdc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x18cdc8: 0x54b30005  bnel        $a1, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x18CDC8u;
    {
        const bool branch_taken_0x18cdc8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 19));
        if (branch_taken_0x18cdc8) {
            ctx->pc = 0x18CDCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18CDC8u;
            // 0x18cdcc: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18CDE0u;
            return;
        }
    }
    ctx->pc = 0x18CDD0u;
    // 0x18cdd0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x18cdd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cdd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18cdd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cdd8: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x18cdd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    ctx->pc = 0x18cddcu;
}
