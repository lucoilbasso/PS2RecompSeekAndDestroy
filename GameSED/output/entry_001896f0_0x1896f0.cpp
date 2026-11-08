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

// Function: entry_001896f0
// Address: 0x1896f0 - 0x189720
void entry_001896f0_0x1896f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001896f0_0x1896f0");
#endif

    ctx->pc = 0x1896f0u;

    // 0x1896f0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1896f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1896f4: 0x8cb2015c  lw          $s2, 0x15C($a1)
    ctx->pc = 0x1896f4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 348)));
    // 0x1896f8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1896f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1896fc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1896fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x189700: 0x14400048  bnez        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x189700u;
    {
        const bool branch_taken_0x189700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x189704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189700u;
        // 0x189704: 0x24710020  addiu       $s1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189700) {
            ctx->pc = 0x189824u;
            return;
        }
    }
    ctx->pc = 0x189708u;
    // 0x189708: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x189708u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x18970c: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x18970cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x189710: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x189710u;
    {
        const bool branch_taken_0x189710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189710) {
            ctx->pc = 0x189720u;
            return;
        }
    }
    ctx->pc = 0x189718u;
    // 0x189718: 0xc061920  jal         func_186480
    ctx->pc = 0x189718u;
    SET_GPR_U32(ctx, 31, 0x189720u);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x189718u, 0x189720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189720u;
}
