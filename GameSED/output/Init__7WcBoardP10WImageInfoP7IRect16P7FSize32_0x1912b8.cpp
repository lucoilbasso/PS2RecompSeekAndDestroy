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

// Function: Init__7WcBoardP10WImageInfoP7IRect16P7FSize32
// Address: 0x1912b8 - 0x19130c
void Init__7WcBoardP10WImageInfoP7IRect16P7FSize32_0x1912b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__7WcBoardP10WImageInfoP7IRect16P7FSize32_0x1912b8");
#endif

    switch (ctx->pc) {
        case 0x1912d8u: goto label_1912d8;
        case 0x1912f8u: goto label_1912f8;
        default: break;
    }

    ctx->pc = 0x1912b8u;

    // 0x1912b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1912b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1912bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1912bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1912c0: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1912c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1912c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1912c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1912c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1912c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1912cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1912ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1912d0: 0xc062cb0  jal         func_18B2C0
    ctx->pc = 0x1912D0u;
    SET_GPR_U32(ctx, 31, 0x1912D8u);
    ctx->pc = 0x1912D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1912D0u;
    // 0x1912d4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B2C0u, 0x1912D0u, 0x1912D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1912D8u;
label_1912d8:
    // 0x1912d8: 0x24020176  addiu       $v0, $zero, 0x176
    ctx->pc = 0x1912d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 374));
    // 0x1912dc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1912dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1912e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1912e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1912e4: 0xae200270  sw          $zero, 0x270($s1)
    ctx->pc = 0x1912e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 624), GPR_U32(ctx, 0));
    // 0x1912e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1912e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1912ec: 0xae200278  sw          $zero, 0x278($s1)
    ctx->pc = 0x1912ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 632), GPR_U32(ctx, 0));
    // 0x1912f0: 0xc0644c4  jal         func_191310
    ctx->pc = 0x1912F0u;
    SET_GPR_U32(ctx, 31, 0x1912F8u);
    ctx->pc = 0x1912F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1912F0u;
    // 0x1912f4: 0xae200274  sw          $zero, 0x274($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 628), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191310u, 0x1912F0u, 0x1912F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1912F8u;
label_1912f8:
    // 0x1912f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1912f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1912fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1912fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x191300: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x191300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x191304: 0x3e00008  jr          $ra
    ctx->pc = 0x191304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191304u;
        // 0x191308: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19130Cu;
}
