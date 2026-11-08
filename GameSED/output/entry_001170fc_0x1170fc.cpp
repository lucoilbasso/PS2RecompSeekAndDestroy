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

// Function: entry_001170fc
// Address: 0x1170fc - 0x117168
void entry_001170fc_0x1170fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001170fc_0x1170fc");
#endif

    ctx->pc = 0x1170fcu;

    // 0x1170fc: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x1170fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x117100: 0x2ae2000c  slti        $v0, $s7, 0xC
    ctx->pc = 0x117100u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x117104: 0x1440ffc2  bnez        $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x117104u;
    {
        const bool branch_taken_0x117104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x117108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117104u;
        // 0x117108: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117104) {
            ctx->pc = 0x117010u;
            return;
        }
    }
    ctx->pc = 0x11710Cu;
    // 0x11710c: 0x24020934  addiu       $v0, $zero, 0x934
    ctx->pc = 0x11710cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2356));
    // 0x117110: 0x240524d0  addiu       $a1, $zero, 0x24D0
    ctx->pc = 0x117110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9424));
    // 0x117114: 0x2a21818  mult        $v1, $s5, $v0
    ctx->pc = 0x117114u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x117118: 0x2a52818  mult        $a1, $s5, $a1
    ctx->pc = 0x117118u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x11711c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11711cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117120: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x117120u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x117124: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x117124u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117128: 0x761021  addu        $v0, $v1, $s6
    ctx->pc = 0x117128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x11712c: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x11712cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x117130: 0x2463c540  addiu       $v1, $v1, -0x3AC0
    ctx->pc = 0x117130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952256));
    // 0x117134: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x117134u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x117138: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x117138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11713c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x11713cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x117140: 0x8c441008  lw          $a0, 0x1008($v0)
    ctx->pc = 0x117140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4104)));
    // 0x117144: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x117144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x117148: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x117148u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11714c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x11714cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x117150: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x117150u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x117154: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x117154u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x117158: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x117158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11715c: 0xaca40fec  sw          $a0, 0xFEC($a1)
    ctx->pc = 0x11715cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4076), GPR_U32(ctx, 4));
    // 0x117160: 0x3e00008  jr          $ra
    ctx->pc = 0x117160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117160u;
        // 0x117164: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117168u;
}
