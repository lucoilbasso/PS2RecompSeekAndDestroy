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

// Function: entry_001d3d74
// Address: 0x1d3d74 - 0x1d3dc8
void entry_001d3d74_0x1d3d74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3d74_0x1d3d74");
#endif

    switch (ctx->pc) {
        case 0x1d3d84u: goto label_1d3d84;
        case 0x1d3da0u: goto label_1d3da0;
        case 0x1d3dc4u: goto label_1d3dc4;
        default: break;
    }

    ctx->pc = 0x1d3d74u;

    // 0x1d3d74: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1D3D74u;
    {
        const bool branch_taken_0x1d3d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3D74u;
        // 0x1d3d78: 0x8fa40044  lw          $a0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3d74) {
            ctx->pc = 0x1D3DD0u;
            return;
        }
    }
    ctx->pc = 0x1D3D7Cu;
    // 0x1d3d7c: 0xc075704  jal         func_1D5C10
    ctx->pc = 0x1D3D7Cu;
    SET_GPR_U32(ctx, 31, 0x1D3D84u);
    ctx->pc = 0x1D3D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3D7Cu;
    // 0x1d3d80: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5C10u, 0x1D3D7Cu, 0x1D3D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3D84u;
label_1d3d84:
    // 0x1d3d84: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D3D84u;
    {
        const bool branch_taken_0x1d3d84 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1d3d84) {
            ctx->pc = 0x1D3D88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D3D84u;
            // 0x1d3d88: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D3DD4u;
            return;
        }
    }
    ctx->pc = 0x1D3D8Cu;
    // 0x1d3d8c: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x1d3d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1d3d90: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1d3d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3d94: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1d3d94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d3d98: 0xc0754fe  jal         func_1D53F8
    ctx->pc = 0x1D3D98u;
    SET_GPR_U32(ctx, 31, 0x1D3DA0u);
    ctx->pc = 0x1D3D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3D98u;
    // 0x1d3d9c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D53F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D53F8u, 0x1D3D98u, 0x1D3DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3DA0u;
label_1d3da0:
    // 0x1d3da0: 0x27deffff  addiu       $fp, $fp, -0x1
    ctx->pc = 0x1d3da0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x1d3da4: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x1d3da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x1d3da8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D3DA8u;
    {
        const bool branch_taken_0x1d3da8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3DA8u;
        // 0x1d3dac: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3da8) {
            ctx->pc = 0x1D3DC8u;
            return;
        }
    }
    ctx->pc = 0x1D3DB0u;
    // 0x1d3db0: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x1d3db0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1d3db4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1d3db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3db8: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1d3db8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d3dbc: 0xc0754fe  jal         func_1D53F8
    ctx->pc = 0x1D3DBCu;
    SET_GPR_U32(ctx, 31, 0x1D3DC4u);
    ctx->pc = 0x1D3DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3DBCu;
    // 0x1d3dc0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D53F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D53F8u, 0x1D3DBCu, 0x1D3DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3DC4u;
label_1d3dc4:
    // 0x1d3dc4: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x1d3dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    ctx->pc = 0x1d3dc8u;
}
