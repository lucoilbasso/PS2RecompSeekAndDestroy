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

// Function: entry_00148bb8
// Address: 0x148bb8 - 0x148be0
void entry_00148bb8_0x148bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148bb8_0x148bb8");
#endif

    ctx->pc = 0x148bb8u;

    // 0x148bb8: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x148bb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x148bbc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x148BBCu;
    {
        const bool branch_taken_0x148bbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x148BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148BBCu;
        // 0x148bc0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148bbc) {
            ctx->pc = 0x148BE0u;
            return;
        }
    }
    ctx->pc = 0x148BC4u;
    // 0x148bc4: 0xfc890000  sd          $t1, 0x0($a0)
    ctx->pc = 0x148bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 9));
    // 0x148bc8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x148bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x148bcc: 0xaca80000  sw          $t0, 0x0($a1)
    ctx->pc = 0x148bccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
    // 0x148bd0: 0xacc80000  sw          $t0, 0x0($a2)
    ctx->pc = 0x148bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 8));
    // 0x148bd4: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x148BD4u;
    {
        const bool branch_taken_0x148bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148BD4u;
        // 0x148bd8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148bd4) {
            ctx->pc = 0x148CF4u;
            return;
        }
    }
    ctx->pc = 0x148BDCu;
    // 0x148bdc: 0x0  nop
    ctx->pc = 0x148bdcu;
    // NOP
    ctx->pc = 0x148be0u;
}
