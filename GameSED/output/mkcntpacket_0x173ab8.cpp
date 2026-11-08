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

// Function: mkcntpacket
// Address: 0x173ab8 - 0x173b0c
void mkcntpacket_0x173ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mkcntpacket_0x173ab8");
#endif

    switch (ctx->pc) {
        case 0x173ae0u: goto label_173ae0;
        case 0x173aecu: goto label_173aec;
        default: break;
    }

    ctx->pc = 0x173ab8u;

    // 0x173ab8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x173ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x173abc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x173abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x173ac0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x173ac0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173ac4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x173ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x173ac8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x173ac8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173acc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x173accu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173ad0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x173ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x173ad4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x173ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x173ad8: 0xc06baf0  jal         func_1AEBC0
    ctx->pc = 0x173AD8u;
    SET_GPR_U32(ctx, 31, 0x173AE0u);
    ctx->pc = 0x173ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173AD8u;
    // 0x173adc: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEBC0u, 0x173AD8u, 0x173AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173AE0u;
label_173ae0:
    // 0x173ae0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x173ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173ae4: 0xc06bbdc  jal         func_1AEF70
    ctx->pc = 0x173AE4u;
    SET_GPR_U32(ctx, 31, 0x173AECu);
    ctx->pc = 0x173AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173AE4u;
    // 0x173ae8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF70u, 0x173AE4u, 0x173AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173AECu;
label_173aec:
    // 0x173aec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x173aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173af0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x173af0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173af4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x173af4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x173af8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x173af8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173afc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x173afcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x173b00: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x173b00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x173b04: 0x806bbdc  j           func_1AEF70
    ctx->pc = 0x173B04u;
    ctx->pc = 0x173B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173B04u;
    // 0x173b08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF70u;
    sceVif1PkAddData_0x1aef70(rdram, ctx, runtime); return;
    ctx->pc = 0x173B0Cu;
}
