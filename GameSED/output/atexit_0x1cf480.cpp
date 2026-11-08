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

// Function: atexit
// Address: 0x1cf480 - 0x1cf520
void atexit_0x1cf480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("atexit_0x1cf480");
#endif

    switch (ctx->pc) {
        case 0x1cf4ccu: goto label_1cf4cc;
        default: break;
    }

    ctx->pc = 0x1cf480u;

    // 0x1cf480: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cf480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cf484: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1cf484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1cf488: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cf488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cf48c: 0x2450e1b0  addiu       $s0, $v0, -0x1E50
    ctx->pc = 0x1cf48cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959536));
    // 0x1cf490: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cf490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cf494: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cf494u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf498: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cf498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cf49c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cf49cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x24E1B0u));
    // 0x1cf4a0: 0x8c460148  lw          $a2, 0x148($v0)
    ctx->pc = 0x1cf4a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 328)));
    // 0x1cf4a4: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CF4A4u;
    {
        const bool branch_taken_0x1cf4a4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF4A4u;
        // 0x1cf4a8: 0x24040088  addiu       $a0, $zero, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf4a4) {
            ctx->pc = 0x1CF4B4u;
            goto label_1cf4b4;
        }
    }
    ctx->pc = 0x1CF4ACu;
    // 0x1cf4ac: 0x2446014c  addiu       $a2, $v0, 0x14C
    ctx->pc = 0x1cf4acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 332));
    // 0x1cf4b0: 0xac460148  sw          $a2, 0x148($v0)
    ctx->pc = 0x1cf4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 328), GPR_U32(ctx, 6));
label_1cf4b4:
    // 0x1cf4b4: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1cf4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1cf4b8: 0x28420020  slti        $v0, $v0, 0x20
    ctx->pc = 0x1cf4b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1cf4bc: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1CF4BCu;
    {
        const bool branch_taken_0x1cf4bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF4BCu;
        // 0x1cf4c0: 0x24c30004  addiu       $v1, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf4bc) {
            ctx->pc = 0x1CF4F0u;
            goto label_1cf4f0;
        }
    }
    ctx->pc = 0x1CF4C4u;
    // 0x1cf4c4: 0xc073d5c  jal         func_1CF570
    ctx->pc = 0x1CF4C4u;
    SET_GPR_U32(ctx, 31, 0x1CF4CCu);
    ctx->pc = 0x1CF570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF570u, 0x1CF4C4u, 0x1CF4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF4CCu;
label_1cf4cc:
    // 0x1cf4cc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1cf4ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf4d0: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x1CF4D0u;
    {
        const bool branch_taken_0x1cf4d0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF4D0u;
        // 0x1cf4d4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf4d0) {
            ctx->pc = 0x1CF50Cu;
            goto label_1cf50c;
        }
    }
    ctx->pc = 0x1CF4D8u;
    // 0x1cf4d8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1cf4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cf4dc: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x1cf4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x1cf4e0: 0x8c620148  lw          $v0, 0x148($v1)
    ctx->pc = 0x1cf4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 328)));
    // 0x1cf4e4: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1cf4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1cf4e8: 0xac660148  sw          $a2, 0x148($v1)
    ctx->pc = 0x1cf4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 328), GPR_U32(ctx, 6));
    // 0x1cf4ec: 0x24c30004  addiu       $v1, $a2, 0x4
    ctx->pc = 0x1cf4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_1cf4f0:
    // 0x1cf4f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cf4f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf4f4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1cf4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cf4f8: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x1cf4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1cf4fc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1cf4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1cf500: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x1cf500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1cf504: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1cf504u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1cf508: 0xacb10008  sw          $s1, 0x8($a1)
    ctx->pc = 0x1cf508u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 17));
label_1cf50c:
    // 0x1cf50c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cf50cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf510: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cf510u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cf514: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cf514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cf518: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF518u;
        // 0x1cf51c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF520u;
}
