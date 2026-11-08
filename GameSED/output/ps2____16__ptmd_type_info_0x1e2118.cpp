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

// Function: _$_16__ptmd_type_info
// Address: 0x1e2118 - 0x1e217c
void ps2____16__ptmd_type_info_0x1e2118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2____16__ptmd_type_info_0x1e2118");
#endif

    switch (ctx->pc) {
        case 0x1e2148u: goto label_1e2148;
        default: break;
    }

    ctx->pc = 0x1e2118u;

    // 0x1e2118: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e2118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e211c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1e211cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1e2120: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e2120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e2124: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e2124u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2128: 0x24420d28  addiu       $v0, $v0, 0xD28
    ctx->pc = 0x1e2128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3368));
    // 0x1e212c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e212cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e2130: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e2130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e2134: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e2134u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2138: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1e2138u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1e213c: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x1e213cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1e2140: 0xc072f1a  jal         func_1CBC68
    ctx->pc = 0x1E2140u;
    SET_GPR_U32(ctx, 31, 0x1E2148u);
    ctx->pc = 0x1E2144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2140u;
    // 0x1e2144: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBC68u, 0x1E2140u, 0x1E2148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2148u;
label_1e2148:
    // 0x1e2148: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E2148u;
    {
        const bool branch_taken_0x1e2148 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E214Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2148u;
        // 0x1e214c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2148) {
            ctx->pc = 0x1E2168u;
            goto label_1e2168;
        }
    }
    ctx->pc = 0x1E2150u;
    // 0x1e2150: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e2150u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2154: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e2154u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e2158: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e2158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e215c: 0x80682ca  j           func_1A0B28
    ctx->pc = 0x1E215Cu;
    ctx->pc = 0x1E2160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E215Cu;
    // 0x1e2160: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0B28u;
    ps2___builtin_delete_0x1a0b28(rdram, ctx, runtime); return;
    ctx->pc = 0x1E2164u;
    // 0x1e2164: 0x0  nop
    ctx->pc = 0x1e2164u;
    // NOP
label_1e2168:
    // 0x1e2168: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e2168u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e216c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e216cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e2170: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e2170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2174: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2174u;
        // 0x1e2178: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E217Cu;
}
