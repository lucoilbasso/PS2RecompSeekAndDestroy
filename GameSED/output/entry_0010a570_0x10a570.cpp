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

// Function: entry_0010a570
// Address: 0x10a570 - 0x10a5ec
void entry_0010a570_0x10a570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a570_0x10a570");
#endif

    switch (ctx->pc) {
        case 0x10a58cu: goto label_10a58c;
        case 0x10a594u: goto label_10a594;
        default: break;
    }

    ctx->pc = 0x10a570u;

    // 0x10a570: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10a570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10a574: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10a574u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a578: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10a578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10a57c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10a57cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10a580: 0x8c500028  lw          $s0, 0x28($v0)
    ctx->pc = 0x10a580u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x10a584: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x10A584u;
    SET_GPR_U32(ctx, 31, 0x10A58Cu);
    ctx->pc = 0x10A588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A584u;
    // 0x10a588: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x10A584u, 0x10A58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A58Cu;
label_10a58c:
    // 0x10a58c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x10A58Cu;
    SET_GPR_U32(ctx, 31, 0x10A594u);
    ctx->pc = 0x10A590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A58Cu;
    // 0x10a590: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x10A58Cu, 0x10A594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A594u;
label_10a594:
    // 0x10a594: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x10a594u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x10a598: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x10a598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x10a59c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x10a59cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x10a5a0: 0x24a50290  addiu       $a1, $a1, 0x290
    ctx->pc = 0x10a5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 656));
    // 0x10a5a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10a5a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a5a8: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x10a5a8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10a5ac: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x10a5acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x10a5b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10a5b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a5b4: 0xfe230000  sd          $v1, 0x0($s1)
    ctx->pc = 0x10a5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
    // 0x10a5b8: 0xdca40008  ld          $a0, 0x8($a1)
    ctx->pc = 0x10a5b8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x10a5bc: 0xfe240008  sd          $a0, 0x8($s1)
    ctx->pc = 0x10a5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 4));
    // 0x10a5c0: 0xdca30010  ld          $v1, 0x10($a1)
    ctx->pc = 0x10a5c0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x10a5c4: 0xfe230010  sd          $v1, 0x10($s1)
    ctx->pc = 0x10a5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 3));
    // 0x10a5c8: 0xdca40018  ld          $a0, 0x18($a1)
    ctx->pc = 0x10a5c8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x10a5cc: 0xfe240018  sd          $a0, 0x18($s1)
    ctx->pc = 0x10a5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 4));
    // 0x10a5d0: 0xdca30020  ld          $v1, 0x20($a1)
    ctx->pc = 0x10a5d0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x10a5d4: 0xfe230020  sd          $v1, 0x20($s1)
    ctx->pc = 0x10a5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 3));
    // 0x10a5d8: 0xdca40028  ld          $a0, 0x28($a1)
    ctx->pc = 0x10a5d8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x10a5dc: 0xfe240028  sd          $a0, 0x28($s1)
    ctx->pc = 0x10a5dcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 40), GPR_U64(ctx, 4));
    // 0x10a5e0: 0xdca30030  ld          $v1, 0x30($a1)
    ctx->pc = 0x10a5e0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x10a5e4: 0xfe230030  sd          $v1, 0x30($s1)
    ctx->pc = 0x10a5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 48), GPR_U64(ctx, 3));
    // 0x10a5e8: 0xdca40038  ld          $a0, 0x38($a1)
    ctx->pc = 0x10a5e8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 56)));
    ctx->pc = 0x10a5ecu;
}
