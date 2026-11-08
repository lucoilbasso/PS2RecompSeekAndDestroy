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

// Function: entry_0010d784
// Address: 0x10d784 - 0x10d7cc
void entry_0010d784_0x10d784(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d784_0x10d784");
#endif

    ctx->pc = 0x10d784u;

label_10d784:
    // 0x10d784: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x10d784u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10d788: 0xdca30008  ld          $v1, 0x8($a1)
    ctx->pc = 0x10d788u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x10d78c: 0xdcaa0010  ld          $t2, 0x10($a1)
    ctx->pc = 0x10d78cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x10d790: 0xdcab0018  ld          $t3, 0x18($a1)
    ctx->pc = 0x10d790u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x10d794: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x10d794u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x10d798: 0xfc830008  sd          $v1, 0x8($a0)
    ctx->pc = 0x10d798u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
    // 0x10d79c: 0xfc8a0010  sd          $t2, 0x10($a0)
    ctx->pc = 0x10d79cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 10));
    // 0x10d7a0: 0xfc8b0018  sd          $t3, 0x18($a0)
    ctx->pc = 0x10d7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 11));
    // 0x10d7a4: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x10d7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x10d7a8: 0x0  nop
    ctx->pc = 0x10d7a8u;
    // NOP
    // 0x10d7ac: 0x0  nop
    ctx->pc = 0x10d7acu;
    // NOP
    // 0x10d7b0: 0x14a8fff4  bne         $a1, $t0, . + 4 + (-0xC << 2)
    ctx->pc = 0x10D7B0u;
    {
        const bool branch_taken_0x10d7b0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 8));
        ctx->pc = 0x10D7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D7B0u;
        // 0x10d7b4: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d7b0) {
            ctx->pc = 0x10D784u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10d784;
        }
    }
    ctx->pc = 0x10D7B8u;
    // 0x10d7b8: 0x8ce201b8  lw          $v0, 0x1B8($a3)
    ctx->pc = 0x10d7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 440)));
    // 0x10d7bc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x10d7bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x10d7c0: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x10d7c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x10d7c4: 0x5440ffea  bnel        $v0, $zero, . + 4 + (-0x16 << 2)
    ctx->pc = 0x10D7C4u;
    {
        const bool branch_taken_0x10d7c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10d7c4) {
            ctx->pc = 0x10D7C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10D7C4u;
            // 0x10d7c8: 0x8ce201bc  lw          $v0, 0x1BC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10D770u;
            return;
        }
    }
    ctx->pc = 0x10D7CCu;
}
