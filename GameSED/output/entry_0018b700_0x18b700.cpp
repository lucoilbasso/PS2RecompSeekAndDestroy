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

// Function: entry_0018b700
// Address: 0x18b700 - 0x18b728
void entry_0018b700_0x18b700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b700_0x18b700");
#endif

    ctx->pc = 0x18b700u;

    // 0x18b700: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x18B700u;
    {
        const bool branch_taken_0x18b700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18b700) {
            ctx->pc = 0x18B704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B700u;
            // 0x18b704: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B738u;
            return;
        }
    }
    ctx->pc = 0x18B708u;
    // 0x18b708: 0x96020202  lhu         $v0, 0x202($s0)
    ctx->pc = 0x18b708u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 514)));
    // 0x18b70c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18b70cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x18b710: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x18b710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x18b714: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18B714u;
    {
        const bool branch_taken_0x18b714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B714u;
        // 0x18b718: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b714) {
            ctx->pc = 0x18B734u;
            return;
        }
    }
    ctx->pc = 0x18B71Cu;
    // 0x18b71c: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x18b71cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x18b720: 0xc0685b8  jal         func_1A16E0
    ctx->pc = 0x18B720u;
    SET_GPR_U32(ctx, 31, 0x18B728u);
    ctx->pc = 0x18B724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B720u;
    // 0x18b724: 0x2484dda0  addiu       $a0, $a0, -0x2260 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A16E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A16E0u, 0x18B720u, 0x18B728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B728u;
}
