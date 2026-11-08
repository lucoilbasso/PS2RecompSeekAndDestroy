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

// Function: DecodeSlide__FPUcT0
// Address: 0x1a0438 - 0x1a0558
void DecodeSlide__FPUcT0_0x1a0438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DecodeSlide__FPUcT0_0x1a0438");
#endif

    switch (ctx->pc) {
        case 0x1a0468u: goto label_1a0468;
        case 0x1a04b0u: goto label_1a04b0;
        case 0x1a04e8u: goto label_1a04e8;
        default: break;
    }

    ctx->pc = 0x1a0438u;

    // 0x1a0438: 0x8f82916c  lw          $v0, -0x6E94($gp)
    ctx->pc = 0x1a0438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938988)));
    // 0x1a043c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1a043cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0440: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1a0440u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0444: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a0444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a0448: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a0448u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a044c: 0x3c0a0024  lui         $t2, 0x24
    ctx->pc = 0x1a044cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)36 << 16));
    // 0x1a0450: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x1a0450u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x1a0454: 0x8d4af690  lw          $t2, -0x970($t2)
    ctx->pc = 0x1a0454u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294964880)));
    // 0x1a0458: 0x3c090024  lui         $t1, 0x24
    ctx->pc = 0x1a0458u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)36 << 16));
    // 0x1a045c: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x1a045cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1a0460: 0x8d29f678  lw          $t1, -0x988($t1)
    ctx->pc = 0x1a0460u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294964856)));
    // 0x1a0464: 0x90c70000  lbu         $a3, 0x0($a2)
    ctx->pc = 0x1a0464u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1a0468:
    // 0x1a0468: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1a0468u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1a046c: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x1a046cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a0470: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1a0470u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1a0474: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1a0474u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1a0478: 0x90c40000  lbu         $a0, 0x0($a2)
    ctx->pc = 0x1a0478u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a047c: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1a047cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1a0480: 0x8f829170  lw          $v0, -0x6E90($gp)
    ctx->pc = 0x1a0480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938992)));
    // 0x1a0484: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1a0484u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1a0488: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1a0488u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1a048c: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x1a048cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a0490: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1a0490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1a0494: 0xe43825  or          $a3, $a3, $a0
    ctx->pc = 0x1a0494u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x1a0498: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x1a0498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x1a049c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1a049cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1a04a0: 0xaf829170  sw          $v0, -0x6E90($gp)
    ctx->pc = 0x1a04a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938992), GPR_U32(ctx, 2));
    // 0x1a04a4: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1a04a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1a04a8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1a04a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a04ac: 0xe81024  and         $v0, $a3, $t0
    ctx->pc = 0x1a04acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
label_1a04b0:
    // 0x1a04b0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1A04B0u;
    {
        const bool branch_taken_0x1a04b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A04B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A04B0u;
        // 0x1a04b4: 0x8f839170  lw          $v1, -0x6E90($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938992)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a04b0) {
            ctx->pc = 0x1A0510u;
            goto label_1a0510;
        }
    }
    ctx->pc = 0x1A04B8u;
    // 0x1a04b8: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1a04b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a04bc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1a04bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1a04c0: 0x90c40000  lbu         $a0, 0x0($a2)
    ctx->pc = 0x1a04c0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a04c4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1a04c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1a04c8: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x1a04c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1a04cc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1a04ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1a04d0: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x1a04d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x1a04d4: 0x1422006  srlv        $a0, $v0, $t2
    ctx->pc = 0x1a04d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 10) & 0x1F));
    // 0x1a04d8: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x1a04d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x1a04dc: 0xaf839170  sw          $v1, -0x6E90($gp)
    ctx->pc = 0x1a04dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938992), GPR_U32(ctx, 3));
    // 0x1a04e0: 0x24840003  addiu       $a0, $a0, 0x3
    ctx->pc = 0x1a04e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x1a04e4: 0xa21823  subu        $v1, $a1, $v0
    ctx->pc = 0x1a04e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1a04e8:
    // 0x1a04e8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1a04e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a04ec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a04ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a04f0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1a04f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1a04f4: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x1a04f4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a04f8: 0x0  nop
    ctx->pc = 0x1a04f8u;
    // NOP
    // 0x1a04fc: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A04FCu;
    {
        const bool branch_taken_0x1a04fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A04FCu;
        // 0x1a0500: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a04fc) {
            ctx->pc = 0x1A04E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a04e8;
        }
    }
    ctx->pc = 0x1A0504u;
    // 0x1a0504: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1A0504u;
    {
        const bool branch_taken_0x1a0504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0504u;
        // 0x1a0508: 0x8f829170  lw          $v0, -0x6E90($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938992)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0504) {
            ctx->pc = 0x1A0530u;
            goto label_1a0530;
        }
    }
    ctx->pc = 0x1A050Cu;
    // 0x1a050c: 0x0  nop
    ctx->pc = 0x1a050cu;
    // NOP
label_1a0510:
    // 0x1a0510: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1a0510u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a0514: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1a0514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1a0518: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x1a0518u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a051c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1a051cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1a0520: 0x8f829170  lw          $v0, -0x6E90($gp)
    ctx->pc = 0x1a0520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938992)));
    // 0x1a0524: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a0524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a0528: 0xaf829170  sw          $v0, -0x6E90($gp)
    ctx->pc = 0x1a0528u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938992), GPR_U32(ctx, 2));
    // 0x1a052c: 0x8f829170  lw          $v0, -0x6E90($gp)
    ctx->pc = 0x1a052cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938992)));
label_1a0530:
    // 0x1a0530: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A0530u;
    {
        const bool branch_taken_0x1a0530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a0530) {
            ctx->pc = 0x1A0534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0530u;
            // 0x1a0534: 0x84040  sll         $t0, $t0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0540u;
            goto label_1a0540;
        }
    }
    ctx->pc = 0x1A0538u;
    // 0x1a0538: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A0538u;
    {
        const bool branch_taken_0x1a0538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A053Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0538u;
        // 0x1a053c: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0538) {
            ctx->pc = 0x1A0548u;
            goto label_1a0548;
        }
    }
    ctx->pc = 0x1A0540u;
label_1a0540:
    // 0x1a0540: 0x1500ffdb  bnez        $t0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x1A0540u;
    {
        const bool branch_taken_0x1a0540 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0540u;
        // 0x1a0544: 0xe81024  and         $v0, $a3, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0540) {
            ctx->pc = 0x1A04B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a04b0;
        }
    }
    ctx->pc = 0x1A0548u;
label_1a0548:
    // 0x1a0548: 0x5160ffc7  beql        $t3, $zero, . + 4 + (-0x39 << 2)
    ctx->pc = 0x1A0548u;
    {
        const bool branch_taken_0x1a0548 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0548) {
            ctx->pc = 0x1A054Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0548u;
            // 0x1a054c: 0x90c70000  lbu         $a3, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a0468;
        }
    }
    ctx->pc = 0x1A0550u;
    // 0x1a0550: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0558u;
}
