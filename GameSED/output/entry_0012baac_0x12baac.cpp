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

// Function: entry_0012baac
// Address: 0x12baac - 0x12bad0
void entry_0012baac_0x12baac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012baac_0x12baac");
#endif

    ctx->pc = 0x12baacu;

    // 0x12baac: 0x5aa0000a  blezl       $s5, . + 4 + (0xA << 2)
    ctx->pc = 0x12BAACu;
    {
        const bool branch_taken_0x12baac = (GPR_S32(ctx, 21) <= 0);
        if (branch_taken_0x12baac) {
            ctx->pc = 0x12BAB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12BAACu;
            // 0x12bab0: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12BAD8u;
            return;
        }
    }
    ctx->pc = 0x12BAB4u;
    // 0x12bab4: 0x93a300c3  lbu         $v1, 0xC3($sp)
    ctx->pc = 0x12bab4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 195)));
    // 0x12bab8: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x12bab8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x12babc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12BABCu;
    {
        const bool branch_taken_0x12babc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BABCu;
        // 0x12bac0: 0x246200f6  addiu       $v0, $v1, 0xF6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 246));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12babc) {
            ctx->pc = 0x12BAD0u;
            return;
        }
    }
    ctx->pc = 0x12BAC4u;
    // 0x12bac4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12BAC4u;
    {
        const bool branch_taken_0x12bac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BAC4u;
        // 0x12bac8: 0xa3a000c3  sb          $zero, 0xC3($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 195), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bac4) {
            ctx->pc = 0x12BAD4u;
            return;
        }
    }
    ctx->pc = 0x12BACCu;
    // 0x12bacc: 0x0  nop
    ctx->pc = 0x12baccu;
    // NOP
    ctx->pc = 0x12bad0u;
}
