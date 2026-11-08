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

// Function: _$_17__array_type_info
// Address: 0x1e21d0 - 0x1e2234
void ps2____17__array_type_info_0x1e21d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2____17__array_type_info_0x1e21d0");
#endif

    switch (ctx->pc) {
        case 0x1e2200u: goto label_1e2200;
        default: break;
    }

    ctx->pc = 0x1e21d0u;

    // 0x1e21d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e21d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e21d4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1e21d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1e21d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e21d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e21dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e21dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e21e0: 0x24420d10  addiu       $v0, $v0, 0xD10
    ctx->pc = 0x1e21e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3344));
    // 0x1e21e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e21e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e21e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e21e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e21ec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e21ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e21f0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1e21f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1e21f4: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x1e21f4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1e21f8: 0xc072f1a  jal         func_1CBC68
    ctx->pc = 0x1E21F8u;
    SET_GPR_U32(ctx, 31, 0x1E2200u);
    ctx->pc = 0x1E21FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E21F8u;
    // 0x1e21fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBC68u, 0x1E21F8u, 0x1E2200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2200u;
label_1e2200:
    // 0x1e2200: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E2200u;
    {
        const bool branch_taken_0x1e2200 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2200u;
        // 0x1e2204: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2200) {
            ctx->pc = 0x1E2220u;
            goto label_1e2220;
        }
    }
    ctx->pc = 0x1E2208u;
    // 0x1e2208: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e2208u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e220c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e220cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e2210: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e2210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2214: 0x80682ca  j           func_1A0B28
    ctx->pc = 0x1E2214u;
    ctx->pc = 0x1E2218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2214u;
    // 0x1e2218: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0B28u;
    ps2___builtin_delete_0x1a0b28(rdram, ctx, runtime); return;
    ctx->pc = 0x1E221Cu;
    // 0x1e221c: 0x0  nop
    ctx->pc = 0x1e221cu;
    // NOP
label_1e2220:
    // 0x1e2220: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e2220u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2224: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e2224u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e2228: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e2228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e222c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E222Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E222Cu;
        // 0x1e2230: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E222Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2234u;
}
