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

// Function: entry_0013cb38
// Address: 0x13cb38 - 0x13cb5c
void entry_0013cb38_0x13cb38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013cb38_0x13cb38");
#endif

    ctx->pc = 0x13cb38u;

    // 0x13cb38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13cb38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13cb3c: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x13cb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x13cb40: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x13cb40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x13cb44: 0x94640012  lhu         $a0, 0x12($v1)
    ctx->pc = 0x13cb44u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x13cb48: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x13cb48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x13cb4c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13CB4Cu;
    {
        const bool branch_taken_0x13cb4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CB4Cu;
        // 0x13cb50: 0x8f828a40  lw          $v0, -0x75C0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cb4c) {
            ctx->pc = 0x13CB5Cu;
            return;
        }
    }
    ctx->pc = 0x13CB54u;
    // 0x13cb54: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x13cb54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x13cb58: 0xaf828a40  sw          $v0, -0x75C0($gp)
    ctx->pc = 0x13cb58u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937152), GPR_U32(ctx, 2));
    ctx->pc = 0x13cb5cu;
}
