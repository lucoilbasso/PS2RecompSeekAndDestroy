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

// Function: entry_00132a30
// Address: 0x132a30 - 0x132a60
void entry_00132a30_0x132a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132a30_0x132a30");
#endif

    ctx->pc = 0x132a30u;

    // 0x132a30: 0x620000b  bltz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x132A30u;
    {
        const bool branch_taken_0x132a30 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x132A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132A30u;
        // 0x132a34: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132a30) {
            ctx->pc = 0x132A60u;
            return;
        }
    }
    ctx->pc = 0x132A38u;
    // 0x132a38: 0x2a220100  slti        $v0, $s1, 0x100
    ctx->pc = 0x132a38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x132a3c: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x132A3Cu;
    {
        const bool branch_taken_0x132a3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x132A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132A3Cu;
        // 0x132a40: 0x3c040025  lui         $a0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132a3c) {
            ctx->pc = 0x132AE8u;
            return;
        }
    }
    ctx->pc = 0x132A44u;
    // 0x132a44: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x132a44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x132a48: 0x3c010020  lui         $at, 0x20
    ctx->pc = 0x132a48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)32 << 16));
    // 0x132a4c: 0x2421c060  addiu       $at, $at, -0x3FA0
    ctx->pc = 0x132a4cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294951008));
    // 0x132a50: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x132a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x132a54: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x132A54u;
    {
        const bool branch_taken_0x132a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132A54u;
        // 0x132a58: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132a54) {
            ctx->pc = 0x132B38u;
            return;
        }
    }
    ctx->pc = 0x132A5Cu;
    // 0x132a5c: 0x0  nop
    ctx->pc = 0x132a5cu;
    // NOP
    ctx->pc = 0x132a60u;
}
