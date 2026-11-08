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

// Function: entry_0011d87c
// Address: 0x11d87c - 0x11d910
void entry_0011d87c_0x11d87c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d87c_0x11d87c");
#endif

    switch (ctx->pc) {
        case 0x11d8a0u: goto label_11d8a0;
        case 0x11d8b8u: goto label_11d8b8;
        case 0x11d8dcu: goto label_11d8dc;
        default: break;
    }

    ctx->pc = 0x11d87cu;

    // 0x11d87c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x11d87cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x11d880: 0x24063fff  addiu       $a2, $zero, 0x3FFF
    ctx->pc = 0x11d880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
    // 0x11d884: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x11d884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x11d888: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x11d888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11d88c: 0x8c520030  lw          $s2, 0x30($v0)
    ctx->pc = 0x11d88cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x11d890: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x11d890u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x11d894: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11d894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d898: 0xc05e9c0  jal         func_17A700
    ctx->pc = 0x11D898u;
    SET_GPR_U32(ctx, 31, 0x11D8A0u);
    ctx->pc = 0x11D89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D898u;
    // 0x11d89c: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A700u, 0x11D898u, 0x11D8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D8A0u;
label_11d8a0:
    // 0x11d8a0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x11d8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x11d8a4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x11d8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x11d8a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11d8a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d8ac: 0x24067fff  addiu       $a2, $zero, 0x7FFF
    ctx->pc = 0x11d8acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x11d8b0: 0xc05e9c0  jal         func_17A700
    ctx->pc = 0x11D8B0u;
    SET_GPR_U32(ctx, 31, 0x11D8B8u);
    ctx->pc = 0x11D8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D8B0u;
    // 0x11d8b4: 0x8e250018  lw          $a1, 0x18($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A700u, 0x11D8B0u, 0x11D8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D8B8u;
label_11d8b8:
    // 0x11d8b8: 0x24035800  addiu       $v1, $zero, 0x5800
    ctx->pc = 0x11d8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22528));
    // 0x11d8bc: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x11d8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x11d8c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11d8c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d8c4: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x11d8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x11d8c8: 0x24063fff  addiu       $a2, $zero, 0x3FFF
    ctx->pc = 0x11d8c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
    // 0x11d8cc: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x11d8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x11d8d0: 0xae050014  sw          $a1, 0x14($s0)
    ctx->pc = 0x11d8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 5));
    // 0x11d8d4: 0xc05e9c0  jal         func_17A700
    ctx->pc = 0x11D8D4u;
    SET_GPR_U32(ctx, 31, 0x11D8DCu);
    ctx->pc = 0x11D8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D8D4u;
    // 0x11d8d8: 0x8e250024  lw          $a1, 0x24($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A700u, 0x11D8D4u, 0x11D8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D8DCu;
label_11d8dc:
    // 0x11d8dc: 0x3c030009  lui         $v1, 0x9
    ctx->pc = 0x11d8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9 << 16));
    // 0x11d8e0: 0x8e27002c  lw          $a3, 0x2C($s1)
    ctx->pc = 0x11d8e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x11d8e4: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x11d8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x11d8e8: 0x3463b800  ori         $v1, $v1, 0xB800
    ctx->pc = 0x11d8e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)47104);
    // 0x11d8ec: 0x34a51800  ori         $a1, $a1, 0x1800
    ctx->pc = 0x11d8ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6144);
    // 0x11d8f0: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x11d8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x11d8f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11d8f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d8f8: 0xae070024  sw          $a3, 0x24($s0)
    ctx->pc = 0x11d8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 7));
    // 0x11d8fc: 0x24063fff  addiu       $a2, $zero, 0x3FFF
    ctx->pc = 0x11d8fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
    // 0x11d900: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x11d900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x11d904: 0xae050020  sw          $a1, 0x20($s0)
    ctx->pc = 0x11d904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 5));
    // 0x11d908: 0xc05e9c0  jal         func_17A700
    ctx->pc = 0x11D908u;
    SET_GPR_U32(ctx, 31, 0x11D910u);
    ctx->pc = 0x11D90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D908u;
    // 0x11d90c: 0x8e250030  lw          $a1, 0x30($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A700u, 0x11D908u, 0x11D910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D910u;
}
