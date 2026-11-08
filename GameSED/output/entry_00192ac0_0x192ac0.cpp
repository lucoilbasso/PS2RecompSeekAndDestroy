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

// Function: entry_00192ac0
// Address: 0x192ac0 - 0x192af8
void entry_00192ac0_0x192ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192ac0_0x192ac0");
#endif

    ctx->pc = 0x192ac0u;

    // 0x192ac0: 0xffb10138  sd          $s1, 0x138($sp)
    ctx->pc = 0x192ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 17));
    // 0x192ac4: 0xffb20140  sd          $s2, 0x140($sp)
    ctx->pc = 0x192ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 18));
    // 0x192ac8: 0xffb40150  sd          $s4, 0x150($sp)
    ctx->pc = 0x192ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 20));
    // 0x192acc: 0xffb70168  sd          $s7, 0x168($sp)
    ctx->pc = 0x192accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 23));
    // 0x192ad0: 0xffbe0170  sd          $fp, 0x170($sp)
    ctx->pc = 0x192ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 30));
    // 0x192ad4: 0xffbf0178  sd          $ra, 0x178($sp)
    ctx->pc = 0x192ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 31));
    // 0x192ad8: 0x96620150  lhu         $v0, 0x150($s3)
    ctx->pc = 0x192ad8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 336)));
    // 0x192adc: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x192adcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x192ae0: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x192ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x192ae4: 0x3063e000  andi        $v1, $v1, 0xE000
    ctx->pc = 0x192ae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)57344);
    // 0x192ae8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x192AE8u;
    {
        const bool branch_taken_0x192ae8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x192AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192AE8u;
        // 0x192aec: 0x2a82b  sltu        $s5, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x192ae8) {
            ctx->pc = 0x192AF8u;
            return;
        }
    }
    ctx->pc = 0x192AF0u;
    // 0x192af0: 0xc061920  jal         func_186480
    ctx->pc = 0x192AF0u;
    SET_GPR_U32(ctx, 31, 0x192AF8u);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x192AF0u, 0x192AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192AF8u;
}
