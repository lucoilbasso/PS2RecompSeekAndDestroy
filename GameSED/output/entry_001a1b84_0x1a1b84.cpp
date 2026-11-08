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

// Function: entry_001a1b84
// Address: 0x1a1b84 - 0x1a1bb0
void entry_001a1b84_0x1a1b84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1b84_0x1a1b84");
#endif

    ctx->pc = 0x1a1b84u;

    // 0x1a1b84: 0x10a00028  beqz        $a1, . + 4 + (0x28 << 2)
    ctx->pc = 0x1A1B84u;
    {
        const bool branch_taken_0x1a1b84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1B84u;
        // 0x1a1b88: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1b84) {
            ctx->pc = 0x1A1C28u;
            return;
        }
    }
    ctx->pc = 0x1A1B8Cu;
    // 0x1a1b8c: 0x2ca2004d  sltiu       $v0, $a1, 0x4D
    ctx->pc = 0x1a1b8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)77) ? 1 : 0);
    // 0x1a1b90: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A1B90u;
    {
        const bool branch_taken_0x1a1b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1b90) {
            ctx->pc = 0x1A1B94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1B90u;
            // 0x1a1b94: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1BB0u;
            return;
        }
    }
    ctx->pc = 0x1A1B98u;
    // 0x1a1b98: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x1a1b98u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a1b9c: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x1a1b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x1a1ba0: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x1a1ba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x1a1ba4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1A1BA4u;
    {
        const bool branch_taken_0x1a1ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1BA4u;
        // 0x1a1ba8: 0xa4830000  sh          $v1, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1ba4) {
            ctx->pc = 0x1A1C28u;
            return;
        }
    }
    ctx->pc = 0x1A1BACu;
    // 0x1a1bac: 0x0  nop
    ctx->pc = 0x1a1bacu;
    // NOP
    ctx->pc = 0x1a1bb0u;
}
