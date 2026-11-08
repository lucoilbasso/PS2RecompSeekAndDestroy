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

// Function: entry_0011bd9c
// Address: 0x11bd9c - 0x11be50
void entry_0011bd9c_0x11bd9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011bd9c_0x11bd9c");
#endif

    switch (ctx->pc) {
        case 0x11bdb0u: goto label_11bdb0;
        case 0x11bdc4u: goto label_11bdc4;
        case 0x11bddcu: goto label_11bddc;
        case 0x11bdfcu: goto label_11bdfc;
        case 0x11be10u: goto label_11be10;
        case 0x11be24u: goto label_11be24;
        case 0x11be38u: goto label_11be38;
        case 0x11be44u: goto label_11be44;
        default: break;
    }

    ctx->pc = 0x11bd9cu;

    // 0x11bd9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11bd9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11bda0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11bda0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11bda4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11bda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11bda8: 0xc067294  jal         func_19CA50
    ctx->pc = 0x11BDA8u;
    SET_GPR_U32(ctx, 31, 0x11BDB0u);
    ctx->pc = 0x11BDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BDA8u;
    // 0x11bdac: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CA50u, 0x11BDA8u, 0x11BDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BDB0u;
label_11bdb0:
    // 0x11bdb0: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x11bdb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x11bdb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11bdb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bdb8: 0x24a5d218  addiu       $a1, $a1, -0x2DE8
    ctx->pc = 0x11bdb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955544));
    // 0x11bdbc: 0xc0671e8  jal         func_19C7A0
    ctx->pc = 0x11BDBCu;
    SET_GPR_U32(ctx, 31, 0x11BDC4u);
    ctx->pc = 0x11BDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BDBCu;
    // 0x11bdc0: 0x3c100025  lui         $s0, 0x25 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)37 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C7A0u, 0x11BDBCu, 0x11BDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BDC4u;
label_11bdc4:
    // 0x11bdc4: 0x3c05001f  lui         $a1, 0x1F
    ctx->pc = 0x11bdc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31 << 16));
    // 0x11bdc8: 0x262400c0  addiu       $a0, $s1, 0xC0
    ctx->pc = 0x11bdc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x11bdcc: 0x24a53790  addiu       $a1, $a1, 0x3790
    ctx->pc = 0x11bdccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14224));
    // 0x11bdd0: 0x24060034  addiu       $a2, $zero, 0x34
    ctx->pc = 0x11bdd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x11bdd4: 0xc067260  jal         func_19C980
    ctx->pc = 0x11BDD4u;
    SET_GPR_U32(ctx, 31, 0x11BDDCu);
    ctx->pc = 0x11BDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BDD4u;
    // 0x11bdd8: 0x261047e0  addiu       $s0, $s0, 0x47E0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C980u, 0x11BDD4u, 0x11BDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BDDCu;
label_11bddc:
    // 0x11bddc: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x11bddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x11bde0: 0xa6230006  sh          $v1, 0x6($s1)
    ctx->pc = 0x11bde0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x11bde4: 0x3c05001f  lui         $a1, 0x1F
    ctx->pc = 0x11bde4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31 << 16));
    // 0x11bde8: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x11bde8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x11bdec: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x11bdecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x11bdf0: 0x24a536e0  addiu       $a1, $a1, 0x36E0
    ctx->pc = 0x11bdf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14048));
    // 0x11bdf4: 0xc067260  jal         func_19C980
    ctx->pc = 0x11BDF4u;
    SET_GPR_U32(ctx, 31, 0x11BDFCu);
    ctx->pc = 0x11BDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BDF4u;
    // 0x11bdf8: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C980u, 0x11BDF4u, 0x11BDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BDFCu;
label_11bdfc:
    // 0x11bdfc: 0x3c05001f  lui         $a1, 0x1F
    ctx->pc = 0x11bdfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31 << 16));
    // 0x11be00: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x11be00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x11be04: 0x24a53720  addiu       $a1, $a1, 0x3720
    ctx->pc = 0x11be04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14112));
    // 0x11be08: 0xc067260  jal         func_19C980
    ctx->pc = 0x11BE08u;
    SET_GPR_U32(ctx, 31, 0x11BE10u);
    ctx->pc = 0x11BE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BE08u;
    // 0x11be0c: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C980u, 0x11BE08u, 0x11BE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BE10u;
label_11be10:
    // 0x11be10: 0x3c05001f  lui         $a1, 0x1F
    ctx->pc = 0x11be10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31 << 16));
    // 0x11be14: 0x26240080  addiu       $a0, $s1, 0x80
    ctx->pc = 0x11be14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x11be18: 0x24a53750  addiu       $a1, $a1, 0x3750
    ctx->pc = 0x11be18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14160));
    // 0x11be1c: 0xc067260  jal         func_19C980
    ctx->pc = 0x11BE1Cu;
    SET_GPR_U32(ctx, 31, 0x11BE24u);
    ctx->pc = 0x11BE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BE1Cu;
    // 0x11be20: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C980u, 0x11BE1Cu, 0x11BE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BE24u;
label_11be24:
    // 0x11be24: 0x3c05001f  lui         $a1, 0x1F
    ctx->pc = 0x11be24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31 << 16));
    // 0x11be28: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x11be28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x11be2c: 0x262400b0  addiu       $a0, $s1, 0xB0
    ctx->pc = 0x11be2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
    // 0x11be30: 0xc067260  jal         func_19C980
    ctx->pc = 0x11BE30u;
    SET_GPR_U32(ctx, 31, 0x11BE38u);
    ctx->pc = 0x11BE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BE30u;
    // 0x11be34: 0x24a53780  addiu       $a1, $a1, 0x3780 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C980u, 0x11BE30u, 0x11BE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BE38u;
label_11be38:
    // 0x11be38: 0x26240104  addiu       $a0, $s1, 0x104
    ctx->pc = 0x11be38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 260));
    // 0x11be3c: 0xc0671e8  jal         func_19C7A0
    ctx->pc = 0x11BE3Cu;
    SET_GPR_U32(ctx, 31, 0x11BE44u);
    ctx->pc = 0x11BE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BE3Cu;
    // 0x11be40: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C7A0u, 0x11BE3Cu, 0x11BE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BE44u;
label_11be44:
    // 0x11be44: 0x26240144  addiu       $a0, $s1, 0x144
    ctx->pc = 0x11be44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 324));
    // 0x11be48: 0xc0671e8  jal         func_19C7A0
    ctx->pc = 0x11BE48u;
    SET_GPR_U32(ctx, 31, 0x11BE50u);
    ctx->pc = 0x11BE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BE48u;
    // 0x11be4c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C7A0u, 0x11BE48u, 0x11BE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BE50u;
}
